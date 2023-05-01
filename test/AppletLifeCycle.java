import java.applet.Applet;
import java.awt.Graphics;
/* <applet code="AppletLifeCycle" width="300" height="300"></applet> */
public class AppletLifeCycle extends Applet {
	
	public void init() {
		System.out.println("Applet initialized.");;	
	}
	public void start() {
		System.out.println("Applet Started!");
	}
	public void paint(Graphics g) {
		System.out.println("Printing...");
		g.drawString("Hello World",50,50);
	}
	public void stop() {
		System.out.println("Applet Stoped");
	}
	public void destroy() {
		System.out.println("Applet Destroyed");
	}
}
