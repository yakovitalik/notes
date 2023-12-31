package simpleFrame;

import java.awt.*;
import javax.swing;

/**
* В этой программе демонстрируется применение
* простого графического окна
* @version 18.0.2.1 2022-09-20
* @author Vitaliy Yakovlev
*/

public class SimpleFrameTest
{
	public static void main(String[] args)
	{
		EventQueue.invokeLater(() -> 
		{
			var frame = new SimpleFrame();
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			frame.setVisible(true);
		});
	}
}

class SimpleFrame extends JFrame
{
	private static final int DEFAULT_WIDTH = 300;
	private static final int DEFAULT_HEIGHT = 200;
	
	public SimpleFrame()
	{
		setSize(DEFAULT_WIDTH, DEFAULT_HEIGHT);
	}
}