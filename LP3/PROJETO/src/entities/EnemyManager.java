package entities;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.geom.Rectangle2D;
import java.awt.image.BufferedImage;
import java.util.ArrayList;

import gamestates.Playing;
import levels.Level;
import utilz.LoadSave;
import static utilz.Constants.EnemyConstants.*;

public class EnemyManager {

	private Playing playing;
	private BufferedImage[][] goblinArr;
	private ArrayList<Goblin> goblins = new ArrayList<>();

	public EnemyManager(Playing playing) {
		this.playing = playing;
		loadEnemyImgs();
	}

	public void loadEnemies(Level level) {
		goblins = level.getGoblins();
	}

	public void update(int[][] lvlData, Player player) {
		boolean isAnyActive = false;
		for (Goblin item : goblins)
			if(item.isActive()) {
				item.update(lvlData, player);
				isAnyActive = true;
			}
		if(!isAnyActive)
			playing.setLevelCompleted(true);
			
	}

	public void draw(Graphics g, int xLvlOffset) {
		drawGoblins(g, xLvlOffset);
		//drawHitbox(g, xLvlOffset);
		
	}

	
	private void drawGoblins(Graphics g, int xLvlOffset) {
		for (Goblin c : goblins) 
			if(c.isActive()){
				g.drawImage(goblinArr[c.getEnemyState()][c.getAniIndex()], (int)((c.getHitbox().x - GOBLIN_DRAWOFFSET_X) - xLvlOffset) + c.flipX(), (int)(c.getHitbox().y - GOBLIN_DRAWOFFSET_Y), GOBLIN_WIDTH * c.flipW(), GOBLIN_HEIGHT, null);
				//c.drawHitbox(g, xLvlOffset);
				//c.drawAttackBox(g, xLvlOffset);
			}
	}
	
	public void checkEnemyHit(Rectangle2D.Float attackBox) {
		for (Goblin c : goblins)
				if (attackBox.intersects(c.getHitbox())) {
					c.hurt(10);
					return;
				}
	}

	private void loadEnemyImgs() {
		goblinArr = new BufferedImage[5][8];
		BufferedImage temp = LoadSave.GetSpriteAtlas(LoadSave.GOBLIN_SPRITE);
		for (int j = 0; j < 5; j++)
			for (int i = 0; i < 8; i++)
				goblinArr[j][i] = temp.getSubimage(i * GOBLIN_WIDTH_DEFAULT, j * GOBLIN_HEIGHT_DEFAULT, GOBLIN_WIDTH_DEFAULT, GOBLIN_HEIGHT_DEFAULT);
	}
	
	public void resetAllEnemies() {
		for (Goblin c : goblins)
			c.resetEnemy();
	}
	
	
}