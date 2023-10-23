package work1;

public class Word1 {
	public static void main(String[] args) {
		int[] arr = { 3, 2, 1, 5, 6, 4, 8 };
		System.out.println(chenSo(arr));
	}

	public static int chenSo(int[] arr) {
		int n = 1;
		for (int i = 0; i < arr.length; i++) {
			int count = 0;
			for (int j = 0; j < arr.length; j++) {
				if (n == arr[j]) {
					count++;
				}
			}
			if (count != 1) {
				return n;
			}
			n++;
		}
		return 0;
	}
}
