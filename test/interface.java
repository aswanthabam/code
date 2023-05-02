import java.io.*;
import java.util.Scanner;

interface Circle {
	double pi = 3.14;
	void area(double r);
}

public class Derived implements Circle {
	public void area (double r) {
		System.out.println("Area is : "+pi*r*r);
	}
}

public class Interface {
	public static void main(String arg[]) {
		Derived d = new Derived();
		d.area(10);
	}
}
