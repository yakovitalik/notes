package comboBox;

import java.awt.BorderLayout;
import java.awt.Font;

import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

/**
* В этой программе демонстрируется применение
* комбинировочного списка в пользовательском
* интерфейсе
* @version 18.0.2.1 2022-09-26
* @author Vitaliy Yakovlev
*/

/**
* Фрейм с образцовым текстом метки и комбинированным
* списком для выбора начертания шрифта
*/
public class ComboBoxFrame extends JFrame
{
	private JComboBox<String> faceCombo;
	private JLabel label;
	private static final int DEFAULT_SIZE = 24;
	
	public ComboBoxFrame()
	{
		// ввести метку с образцовым текстом
		label = new JLabel("The quick brown fox jumps " 
				+ "over the lazy dog.");
		label.setFonts(new Font("Serif", Font.PLAIN, DEFAULT_SIZE));
		add(label, BorderLayout.CENTER);
		
		// составить комбинированный список и ввести 
		// в него названия очертания шрифта
		faceCombo = new JComboBox<>();
		faceCombo.addItem("Serif");
		faceCombo.addItem("SansSerif");
		faceCombo.addItem("Monospaced");
		faceCombo.addItem("Dialog");
		faceCombo.addItem("DialogInput");
		
		// приемник событий из комбинированного списка 
		// изменяет на выбранное начертание шрифта,
		// который набран текст метки
		faceCombo.addActionListener(event -> label.setFont(
				(new Font(faceCombo.getItemAt(faceCombo.getSelectedIndex()), Font.PLAIN, 
				DEFAULT_SIZE))));
				
		// ввести комбинированный список на панели
		// у южной границы фрейма
		JPanel comboPanel = new JPanel();
		comboPanel.add(faceCombo);
		add(comboPanel, BorderLayout.SOUTH);
		pack();
	}
}