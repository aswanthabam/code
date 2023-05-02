import java.io.*;
import java.util.*;

public class Exc {
	public static void main(String args[]) {
		System.out.println("Enter no: (1-3) : ");
		Scanner sc = new Scanner(System.in);
		int op = sc.nextInt();
		try {
			switch(op) {
				case 1:
					int a = 10,b = 0;
					int c = a / b;
					break;
				case 2:
					int d[] = new int[3];
					int e = d[10];
					break;
				case 3:
					String f = null;
					f.length();
					break;
				default:
					System.out.println("Invalid option");
			}
		}catch (ArithmeticException e) {
			System.out.println("Arithmetic Exceptiom");
		}catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("Index OUt of ...");
		}catch (NullPointerException e) {
			System.out.println("Null pointer...");
		}
	}
}
