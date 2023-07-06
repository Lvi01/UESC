package entities;

import static utilz.Constants.Directions.LEFT;
import static utilz.Constants.EnemyConstants.*;
import static utilz.HelpMethods.CanMoveHere;
import static utilz.HelpMethods.GetEntityYPosUnderRoofOrAboveFloor;
import static utilz.HelpMethods.IsEntityOnFloor;
import static utilz.HelpMethods.IsFloor;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.geom.Rectangle2D;
import java.awt.geom.Rectangle2D.Float;

import static utilz.Constants.Directions.*;

import main.Game;

public class Goblin extends Enemy {
	
	// AttackBox
		private int attackBoxOffsetX;

	public Goblin(float x, float y) {
		super(x, y, GOBLIN_WIDTH, GOBLIN_HEIGHT, GOBLIN);
		initHitbox(x + GOBLIN_DRAWOFFSET_X, y + GOBLIN_DRAWOFFSET_Y, (int) (28 * Game.SCALE), (int) (33 * Game.SCALE));		
		initAttackBox();
	}
	
	private void initAttackBox() {
		attackBox = new Rectangle2D.Float(x, y, (int) (35 * Game.SCALE), (int) (25 * Game.SCALE));
		attackBoxOffsetX = (int) (Game.SCALE * 30);
	}

	public void update(int[][] lvlData, Player player) {
		updateBehavaior(lvlData, player);
		updateAnimationTick();
		updateAttackBox();
	}
	
	private void updateAttackBox() {
		if (walkDir == RIGHT)
			attackBox.x = hitbox.x + hitbox.width - 6 + (int) (Game.SCALE * 10);
		else if (walkDir == LEFT)
			attackBox.x = hitbox.x - hitbox.width  - (int) (Game.SCALE * 10);

		attackBox.y = hitbox.y + (Game.SCALE * 10);
	}
	
	private void updateBehavaior(int[][] lvlData, Player player) {
		if (firstUpdate)
			firstUpdateCheck(lvlData);

		if(inAir)
			updateInAir(lvlData);
		
		 else {
			switch (state) {
			case IDLE:
				newState(RUNNING);
				break;
			case RUNNING:
				
				if (canSeePlayer(lvlData, player)) {
					turnTowardsPlayer(player);
					if (isPlayerCloseForAttack(player))
						newState(ATTACK);
				}
				
				move(lvlData);
				break;
				
			case ATTACK:
				if (aniIndex == 0)
					attackChecked = false;

				// Changed the name for checkEnemyHit to checkPlayerHit
				if (aniIndex == 3 && !attackChecked)
					checkPlayerHit(attackBox, player);

				break;
			case HIT:
				break;
				
					
				
				
			}
		}

	}
	

	public void drawAttackBox(Graphics g, int xLvlOffset) {
		g.setColor(Color.red);
		g.drawRect((int) (attackBox.x - xLvlOffset), (int) attackBox.y, (int) attackBox.width, (int) attackBox.height);
	}
	
	public int flipX() {
		if (walkDir == LEFT)
			return width;
		else
			return 0;
	}

	public int flipW() {
		if (walkDir == LEFT)
			return -1;
		else
			return 1;

	}

}