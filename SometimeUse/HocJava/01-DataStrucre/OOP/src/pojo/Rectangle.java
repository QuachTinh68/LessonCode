package pojo;

public class Rectangle {
	// chiều rộng
		private int width;

		// chiều cao;
		private int height;

		// hàm tạo không tham số
		public Rectangle() {

		}

		// hàm tạo có tham số
		public Rectangle(int width, int height) {
			this.width = width;
			this.height = height;
		}

		public int getHeight() {
			return height;
		}
		
		public int getWidth() {
			return width;
		}
		
		public void setHeight(int height) {
			this.height = height;
		}
		
		public void setWidth(int width) {
			this.width = width;
		}
		
		@Override
		public String toString() {
			// TODO Auto-generated method stub
			return "width = " + this.width + "; heigth = " + this.height;
			
		}
}
