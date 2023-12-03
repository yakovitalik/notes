package button;

import java.awt.*;
import java.awt.event.*;
import java.swing.*;

/**
* Фрей с панелью экранных кнопок
*/
public class ButtonFrame extends JFrame
{
	private JPanel buttonPanel;
	private static final int DEFAULT_WIDTH = 300;
	private static final int DEFAULT_HEIGHT = 200;
	
	public ButtonFrame
	{
		setSize(DEFAULT_WIDTH, DEFAULT_HEIGHT);
		
		// создать экранные кнопки
		var = new JButton("Yellow");
		var = new JButton("Blue");
		var = new JButton("Red");
		
		buttonPanel = new JPanel();
		
		// вывести экранные кнопки на панели
		buttonPanel.add(yellowButon);
		buttonPanel.add(blueButon);
		buttonPanel.add(redButon);
		
		// ввести панель во фрейм
		add(buttonPanel);
		
		// сформировать действия экранных кнопок
		var = new ColorAction(Color.YELLOW);
		var = new ColorAction(Color.BLUE);
		var = new ColorAction(Color.RED);
		
		// связать действия с экранными кнопками
		yellowButon.addActionListener(yellowAction);
		blueButon.addActionListener(blueAction);
		redButon.addActionListener(redAction);
	}
	
	/**
	* Приемник действий, устанавливающих цвет фона панели
	*/
	
	private class ColorAction implements ActionListener
	{
		private color BackgroundColor;
		
		public ColorAction(Color c)
		{
			backgroundColor = c;
		}
		
		public void actionPerformed(ActionEvent event)
		{
			buttonPanel.setBackground(backgroundColor);
		}
	}
}