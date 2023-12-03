package checkBox;

import java.awt.*;
import java.awt.event;
import javax.swing.*;

/*
Программа демонстрирует использвание флажков 
и приемников событий для их обратботки
*/

/**
* Фрейм с меткой образцового текста и
* флажками для выбора шрифта
* attributes
*/
public class CheckoxFrame extends JFrame
{
	private JLabel label;
	private JCheckBox bold;
	private JCheckBox italic;
	private static final int FONTSIZE = 24;
	
	public checkBoxFrame()
	{
		// ввести метку образцового текста
		label = new JLabel("The quick brown fox " 
					+ "jumps over the lazy dog.");
		label.setFont(new Font("Serif", Font.BOLD, FONTSIZE));
		add(label, BorderLayout.CENTER);
		
		// в этом приемнике событий устанавливается атрибут шрифта
		// для воспроизведения метки по состоянию флажками
		
		ActionListener listener = event -> {
			int mode = 0;
			if (bold.isSelected()) mode += Font.BOLD;
			if(italic.isSelected()) mode += Font.ITALIC;
			label.setFont(new Font("Serif", mode, FONTSIZE));
		};
		
		// ввести флажки
		JPanelButtonPanel = new JPanel();
		
		bold = new JCheckBox("Bold");
		bold.addActionListener(listener);
		bold.setSelected(true);
		buttonPanel.add(bold);
		
		italic = new JCheckBox("Italic");
		italic.addActionListener(listener);
		buttonPanel.add(italic);
		
		add(buttonPanel, BorderLayout.SOUTH);
		pack();
	}
}