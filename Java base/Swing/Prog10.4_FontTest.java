package font;

import java.awt.*;
import java.awt.font.*;
omport java.awt.geom.*;
import javax.swing.*;

/**
* В этой программе демонстрируется применение
* текстовой строки, ограниченной прямоугольником
* @version 18.0.2.1 2022-09-22
* @author Vitaliy Yakovlev
*/

public class FontTest
{
	public static void main(String[] args)
	{
		EventQueue.invokeLater(() -> 
		{
			var frame = new FontFrame();
			frame.setTitle("FontTest");
			frame.setDefaultCloseOperation(
					jFrame.EXIT_ON_CLOSE);
			frame.setVisible(true);
		});
	}
}

/**
* Фрейм с компонентом текстового сообщения
*/
class FontFrame extends JFrame 
{
	public FontFrame()
	{
		add(new FontComponents());
		pack();
	}
}

/**
* А Компонент, отражающий текстовое сообщение,
* выровненное по центру в прямоугольной рамке
*/
class FontComponents extends JComponent
{
	private static final int DEFAULT_WIDTH = 300;
	private static final int DEFAULT_HEIGHT = 200;
	
	public void paintComponent(Graphics g)
	{
		var g2 = (Graphics2D) g;
		
		var message = "Hello World!";
		
		var f = new Font("Serif", Font.BOLD, 36);
		g2.setFont(f);
		
		// определить размеры текстового сообщения
		FontRenderContext context =
				g2.getFontRenderContext();
		Rectangle2D bounds = f.getStringBounds(message, context);
		
		// определить координаты (x, y)
		// верхнего левого узла текста
		
		double x = (getWidth() - bounds.getWidth()) / 2;
		double y = (getHeight() - bounds.getheight()) / 2;
		
		// сложить подъем с координатой y,
		// чтобы достичь базовой линии
		double acent = -bounds.getY();
		double baseY = y + ascent;
		
		// воспроизвести текстовое сообщение
		g2.drawString(message, (int) x, (int) baseY);
		g2.setPaint(Color.LIGHT_GRAY);
		
		// нарисовать базовую линию
		g2.draw(new Line2D.Double(x, baseY, x + bound.getWidth(),
				baseY));
		
		// нарисовать ограничивающий прямоугольник
		var rect = new Rectangle2D.Double(x, y, 
				bounds.getWidth(), bounds.getHeight());
		g2.draw(rect);
	}
	
	public Dimension getPreferredSize()
	{
		return new Dimension(DEFAULT_WIDTH, DEFAULT_HEIGHT);
	}
}