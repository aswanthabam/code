
public class ThreadDemo {
	public static void main(String args[]) {
		System.out.println("Main Thread running.....");
		MyThread t = new MyThread();
		t.start();
		try{
			t.join();
		}catch(Exception e) {
		}
		System.out.println("Main Thread exited!");
	}
}

class MyThread extends Thread {
	public void run() {
		System.out.println("Child thread is running>.....");
		try{
			Thread.sleep(2000);
		}catch(InterruptedException e) {
			e.printStackTrace();
		}
		System.out.println("Child Thread fininshed!");
	}
}
