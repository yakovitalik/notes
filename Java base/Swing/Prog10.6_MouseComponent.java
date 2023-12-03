package mouse;

import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.util.*;
import java.swing.*;

/**
* Компонент для операций с мышью по
* добавлению и удалению квадратов
*/

public class MouseComponent extends JComponent
{
	private static final int DEFAULT_WIDTH = 300;
	private static final int DEFAULT_HEIGHT = 300;
	
	private static final int SIDELENGTH = 10;
	private ArrayList<Rectangle2D> squares;
	private Rectangle2D current;	// квадрат, содержащий курсор мыши
	
	public MouseComponent()
	{
		squares = new ArrayList<>();
		current = null;
		
		addMouseListener(new MouseHandler());
		addMouseMotionListener(new MouseMotionHandler());
	}
	
	public Dimension getPreferredSize()
	{
		return new Dimension(DEFAULT_WIDTH, DEFAULT_HEIGHT);
	}
	
	public void paintComponent(Graphics g)
	{
		var = (Graphics2D) g; 
		
		// нарисовать все квадраты
		for(Rectangle2D r : squares)
			g2.draw(r);
	}
	
	/**
	* Обнаруживает первый квадрат, содержащий
	* заданную точку 
	* @param p a Точка
	* @return the Первый квадрат, содержащий точку p
	*/
	public Rectangle2D find(Point2D p)
	{
		for(Rectangle2D r : squares)
		{
			if(r.contains(p)) return r;
		}
		return null;
	}
	
	/**
	* Вводит квадрат в коллекцию
	* @param p Центра квадрата
	*/
	public void add(Point2D p)
	{
		double x = p.getX();
		double y = p.getY();
		
		current = new Rectangle2D.Double(x - SIDELENGTH / 2, 
				y - SIDELENGTH / 2, SIDELENGTH, SIDELENGTH);
		squares.add(current);
		repaint();
	}
	
	/**
	* Удаляет квадрат из коллекции
	* @param s Удаляемый квадрат
	*/
	public void remove(Rectangle2D s)
	{
		if(s == null) return;
		if(s == current) current = null;
		squares.remove(s);
		repaint();
	}
	
	private class MouseHandler extends MouseAdapter
	{
		public void mousePressed(MouseEvent event)
		{
			// добавить новый квадрат, если курсор
			// находится за пределами квадрата
			current = find(event.getPoint());
			if(current = null) add(event.getPoint());
		}
		
		public void mouseClicked(MouseEvent event)
		{
			// удалить текущий квадрат, если на нем
			// произведен двойной щелчок
			current = find(event.getPoint());
			if(current != null && event.ClickCount() >= 2)
				remove current;
		}
	}
	
	private class MouseMotionHandler implements MouseMotionListener
	{
		public void mouseMoved(mouseEvent event)
		{
			// задать курсор в виде перекрестья,
			// если он находится внутри квадрата
			
			if(find(event.getPoint()) == null)
				setCursor(Cursor.getDefaultCursor());
			else setCursor(Cursor.getPredefinedCursor(Cursor.CROSSHAIR_CURSOR));
		}
		
		public void mouseDragged(MouseEvent event)
		{
			if(current != null)
			{
				int x = event.getX();
				int y = event.getY();
				
				// перетащить текущий квадрат, 
				// чтобы отцентрировать его в точке
				// с координатами (x, y)
				current.setFrame(x - SIDELENGTH / 2, y - SIDELENGTH / 2,
						SIDELENGTH, SIDELENGTH);
				repaint();
			}
		}
	}
}