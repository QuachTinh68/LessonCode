package work1;

public class giaibai1 {
	    public static void main(String[] args) {
	        for (int i = 0; i < 8; i++) {
	            System.out.print("*");
	        }
	        System.out.println();
	        for (int i = 0; i < 6; i++) {
	            System.out.println("*");
	        }
	        for (int i = 0; i < 5; i++) {
	            for (int j = 0; j < i; j++) {
	                System.out.print(" ");
	            }
	            System.out.println("*");
	        }
	        System.out.println();
	        for (int i = 4; i >= 0; i--) {
	            for (int j = 0; j < i; j++) {
	                System.out.print(" ");
	            }
	            System.out.println("*");
	        }
	    }
	}



