package radioButton;

import java.awt.*;
import java.awt.event;
import javax.swing.*;

/*
Программа устанавливает размер шрифта с 
использованием кнопок-переключателей
*/

/**
* Фрейм с меткой образцового текста и
* кнопками переключателями для выбора размера шрифта
*/
public class CheckoxFrame extends JFrame
{
	private JPanel buttonPanel;
	private ButtonGroup group;
	private JLabel label;
	private static final int DEFAULT_SIZE = 36;
	
	public RadioButtonFrame()
	{
		// ввести метку образцового текста
		label = new JLabel("The quick brown fox jumps " 
					+ "over the lazy dog.");
		label.setFont(new Font("Serif", Font.PLAIN, DEFAULT_SIZE));
		add(label, BorderLayout.CENTER);
		
		// ввести кнопки-переключатели
		buttonPanel = new JPanel();
		group = new ButtonGroup();
		
		addRadioButton("Small", 8);
		addRadioButton("Medium", 12);
		addRadioButton("Large", 18);
		addRadioButton("Extra Large", 36);
		
		add(buttonPanel, BorderLayout.SOUTH);
		pack();
	}
	
	/**
	* Вводит кнопку-переключатель, устанавливающую
	* размер шрифта для выделения образцового текста
	* @param name Строка надписи на кнопке
	* @param size Размер шрифта, устанавливаемый данной кнопкой
	*/
	public void addRadioButton(String name, intt size)
	{
		boolean selected = size == DEFAULT_SIZE;
		JRadioButton button = new JRadioButton(name, selected);
		
	group.addButton(button);
	buttonPanel.add(button);
	
	// это приемник событий устанавливает размер шрифта
	// для образцового текста метки
	
	ActionListener listener = event -> label.setFont
			(new Font("Serif", Font.PLAIN, size));
	button.addActionListener(listener);
	}
}