import com.example.mypack.Adder;

public class Package {
	public static void main(String args[]) {
		Adder a = new Adder();
		System.out.println("Adding 3 and 4: " + a.add(3, 4));
	}
}
