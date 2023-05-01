import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

class FileDemo {
	public static void main(String args[]) {

		java.io.File file = new java.io.File("example.txt");
		try {
			FileOutputStream out = new FileOutputStream(file);
			java.util.Scanner sc = new java.util.Scanner(System.in);
			System.out.println("Enter contents of file: (QUIT to exit)");
			String st = "", s;
			while (!((s = sc.nextLine()).equals("QUIT"))) {
				st += "\n" + s;
			}
			out.write(st.getBytes());
			out.close();
			FileInputStream in = new FileInputStream(file);

			StringBuilder b = new StringBuilder();
			int val;
			while ((val = in.read()) != -1) {
				b.append((char) val);
			}
			System.out.println("Contents of file\n" + b.toString());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
