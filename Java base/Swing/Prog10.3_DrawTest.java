package draw;

/*
Рисуются прямоугольник, эллипс, вписанный в прямоугольник, 
диагональ прямоугольника, а также окружность,
 центр которой совпадает с центром прямоугольника.
*/

import java.awt.*;
import java.awt.geom.*;
import javax.swing.*;

/**
* В этой программе демонстрируется применение
* рисования фигур во фрейме
* @version 18.0.2.1 2022-09-21
* @author Vitaliy Yakovlev
*/

public class DrawTest
	public static void main(String[] args)
	{
		EventQueue.invokeLater(() -> 
		{
			var frame = new drawFrame();
			frame.setTitle("DrawTest");
			frame.setDefaultCloseOperation(
					JFrame.EXIT_ON_CLOSE);
			frame.setVisible(true);
		});
	}
}

/**
* Фрейм, содержащий панель с нарисованными
* и двухмерными формами
*/
class DrawFrame extends JFrame
{
	public DrawFrame()
	{
		add(new DrawComponent());
		pack();
	}
}

/**
* Компонент, отображающий прямоугольники и элипсы
*/
class DrawComponent extends JComponent
{
	private static final int DEFAULT_WIDTH = 400;
	private static final int DEFAULT_HEIGHT = 400;
	
	public void paintComponent(Graphics g)
	{
		var g2 = (Graphics2D) g;
		
		// нарисовать прямоугольник
		double left x = 100;
		double topY = 100; 
		double width = 200;
		double height = 150;
		
		var rect = new Rectangle2D.Double(leftX, topY, width, height);
		g2.draw(rect);
		
		// нарисовать вписанный элипс
		var ellipse = new Ellipse2D.Double();
		ellipse.setFrame(rect);
		g2.draw(ellipse);
		
		// нарисовать диаганальную линию
		g2.draw(new Line2D.Double(leftX, topY, leftX + width, 
						topY + height));
		
		// нарисовать окружность с тем же самым центром
		double centerX = rect.getCenterX();
		double centerY = rect.getCenterY();
		double radius = 150;
		
		var circle = new Ellipse2D.Double();
		circle.setFrameForCenter(centerX, centerY, centerX + radius, 
				centerY + radius);
		g2.draw(circle);
	}
	
	public Dimension getPrefferedSize()
	{
		return new Dimension(DEFAULT_WIDTH, DEFAULT_HEIGHT);
	}
}