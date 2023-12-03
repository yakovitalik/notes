package notHelloWorld;

import javax.swing.*;
import javax.awt.*;

/**
* В этой программе демонстрируется 
* фрейм, содержаний окно сообщений
* @version 18.0.2.1 2022-09-21
* @author Vitaliy Yakovlev
*/

public class NotHelloWorld
{
	public static void main(String[] args)
	{
		EventQueue.invokeLater(() -> 
		{
			var frame = new NotHelloWorldFrame();
			frame.setTitle("NotHelloWorld");
			frame.setDefaultCloseOperation(
				JFrame.EXIT_ON_CLOSE);
			frame.setVisible(true);
		});
	}
}

/**
* Фрейм, содержащий панель сообщений
*/
class NotHelloWorldFrame extends JFrame
{
	public NotHelloWorldFrame()
	{
		add(new NotHelloWorldComponent());
		pack();
	}
}

/**
* Компонент, выводящий сообщение
*/
class NotHelloWorldComponent extends JComponent
{
	public static final int MESSAGE_X = 75;
	public static final int MESSAGE_Y = 100;
	
	private static final int DEFAULT_WIDTH = 300;
	private static final int DEFAULT_HEIGHT = 200;
	
	public void paintComponent(Graphics q)
	{
		g.drawString("Not a Hello, World program", MESSAGE_X, MESSAGE_Y);
	}
	
	public Dimension getPreferredSize()
	{
		return new Dimension(DEFAULT_WIDTH, DEFAULT_HEIGHT);
	}
}