import java.awt.*;
import java.lang.*;
import java.util.*;


public class robot{

	static Robot robot;

	public static void main(String[] args){
		System.out.println("test");
		try{
			robot = new Robot();
			while(true){
				Thread.sleep((long)(Math.random() * 30000));
				robot.mouseMove((int)(Math.random() * 500),(int)(Math.random() * 500));
			}
		}
				catch(Exception e){
			System.out.println(e.getMessage());
		}
	}

}
