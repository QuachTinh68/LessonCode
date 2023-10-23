package demo;

import pojo.Rectangle;

public class DemoRectangle {
public static void main(String[] args) {
	Rectangle rectangle1= new Rectangle();
			System.out.println(rectangle1); 
			
	Rectangle rectangle2=new Rectangle(5, 3);
	System.out.println(rectangle2);
	rectangle2.setWidth(6);
	rectangle2.setHeight(5);
	System.out.println(rectangle2);
	int area = rectangle2.getWidth()*rectangle2.getHeight();
	System.out.println("Area of rectangle2 = "+ area);
	}
}
