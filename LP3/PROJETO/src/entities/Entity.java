package entities;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Rectangle;
import java.awt.geom.Rectangle2D;

import main.Game;

public abstract class Entity {
	
	protected float x, y;
	protected int width, height;
	protected Rectangle2D.Float hitbox;
	protected int aniTick, aniIndex;
	protected int state;
	protected float airSpeed;
	protected boolean inAir = false;
	protected int maxHealth;
	protected int currentHealth;
	protected Rectangle2D.Float attackBox;
	protected float walkSpeed = 1.0f * Game.SCALE;
	
	
	
	public Entity(float x, float y, int width, int height) {
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = height;
			
	}
	
	//protected void drawHitbox(Graphics g, int lvlOffset) {
		//g.setColor(Color.PINK);
	//	g.drawRect((int)hitbox.x - lvlOffset, (int)hitbox.y, (int)hitbox.width, (int)hitbox.height);
	//}

	protected void initHitbox(float x, float y, int width, int height) {
		hitbox = new Rectangle2D.Float((int)x, (int)y, width, height);
	}
	
	//protected void updateHitbox() {
		//hitbox.x = (int) x;
	//	hitbox.y = (int) y;
	//}
	
	public Rectangle2D.Float getHitbox() {
		return hitbox;
	}
	
	public int getEnemyState() {
		return state;
	}
	
	public int getAniIndex() {
		return aniIndex;
	}
	
}
