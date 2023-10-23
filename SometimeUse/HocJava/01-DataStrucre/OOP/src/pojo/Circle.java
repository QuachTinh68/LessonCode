package pojo;

public class Circle {
	private int x;
	private int y;
	private int radius;
	
	public Circle() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Circle(int x, int y) {
		super();
		this.x = x;
		this.y = y;
	}
	

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}

	public int getRadius() {
		return radius;
	}

	public void setRadius(int radius) {
		this.radius = radius;
	}
	public float area( ) {
		float area= (float) ((radius*radius)*3.14);
		return area;
	}
	public Circle(int x, int y, int radius) {
		super();
		this.x = x;
		this.y = y;
		this.radius = radius;
	}

	@Override
	public String toString() {
		return "Circle [x=" + x + ", y=" + y + "]";
	}
	
}