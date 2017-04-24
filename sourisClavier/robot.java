import java.awt.*;
import java.lang.*;


public class robot{

	static Robot robot;

	public static void main(String[] args){
		System.out.println("test");
		try{
			robot = new Robot();
			while(true){
				Thread.sleep(1);
				robot.mouseMove(0,0);
			}
		}
				catch(Exception e){
			System.out.println(e.getMessage());
		}
	}

}