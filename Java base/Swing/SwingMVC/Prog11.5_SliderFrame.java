package slider;

import java.awt.*;
import java.util.*;
import javax.swing.*;
import javax.swing.event.*;

/**
* В этой программе демонстрируется применение
* регулируемых ползунков
* @version 18.0.2.1 2022-09-26
* @author Vitaliy Yakovlev
*/

/**
* Фрейм с несколькими ползунками и текстовым полем
* для указания значений, на которых по очереди 
* устанавливаются ползунки
*/
public class SliderFrame extends JFrame
{
	private JPanel sliderPanel;
	private JTextField textField;
	private ChangeListener listener;
	
	public SliderFrame
	{
		sliderPanel = new JPanel();
		sliderPanel.setLayout(new GridBagLayout());
		
		// общий приемник событий для всех ползунков
		lisener = event -> {
			// обновить текстовое поле, если
			// выбранный ползунок установится 
			// на отметке с другим значением
			JSlider source = (JSlider) event.getSource();
			textField.setText("" + source.getValue());
		};
		
		// ввести простой ползунок 
		var slider = new JSlider();
		addSlider(slider, "Plain");
		
		// ввести ползунок с основными и 
		// неосновными отметками
		slider = new JSlider();
		slider.setPaintTicks(true);
		slider.setMajorTicksSpacing(20);
		slider.setMinorTickSpacing(5);
		addSlider(slider, "Snap to tics");
		
		// ввести ползунок без отметок
		slider = new JSlider();
		slider.setPaintTicks(true);
		slider.setMajorTicksSpacing(20);
		slider.setMinorTickSpacing(5);
		slider.setPaintTrack(false);
		addSlider(slider, "No track");
		
		// ввести обращенный ползунок
		slider = new JSlider();
		slider.setPaintTicks(true);
		slider.setMajorTicksSpacing(20);
		slider.setMinorTickSpacing(5);
		slider.setInverted(true);
		addSlider(slider, "Inverted");
		
		// ввести ползунок с числовым обозначением отметок
		slider = new JSlider();
		slider.setPaintTicks(true);
		slider.setPaintLabels(true);
		slider.setMajorTicksSpacing(20);
		slider.setMinorTickSpacing(5);
		addSlider(slider, "Labels");
		
		// ввести ползунок с буквенными обозначениями отметок
		slider = new JSlider();
		slider.setPaintLabels(true);
		slider.setPaintTicks(true);
		slider.setMajorTicksSpacing(20);
		slider.setMinorTickSpacing(5);
		
		var labelTable = new HashTable<Integer, Component>();
		labelTable.put(0, new JLabel("A"));
		labelTable.put(20, new JLabel("B"));
		labelTable.put(40, new JLabel("C"));
		labelTable.put(60, new JLabel("D"));
		labelTable.put(80, new JLabel("E"));
		labelTable.put(100, new JLabel("F"));
		
		slider.setLabelTable(labelTable);
		addSlider(slider, "Custom Labels");
		
		// ввести ползунок с пиктограммными
		// обозначениями отметок
		slider = new JSlider();
		slider.setPaintTicks(true);
		slider.setPaintLabels(true);
		slider.setSnapToTicks(true);
		slider.setMajorTickSpacing(20);
		slider.setMinorTickSpacing(20);
		
		labelTable = new HashTable<Integer, Component>();
		
		// ввести изображения игральных карт
		labelTable.put(0,newLabel(newImageIcon("nine.gif")));
		labelTable.put(20,newLabel(newImageIcon("ten.gif")));
		labelTable.put(40,newLabel(newImageIcon("jack.gif")));
		labelTable.put(60,newLabel(newImageIcon("queen.gif")));
		labelTable.put(80,newLabel(newImageIcon("king.gif")));
		labelTable.put(100,newLabel(newImageIcon("ace.gif")));
		
		slider.setLabelTable(labelTable);
		addSlider(slider, "Icon labels");
		
		// вводит текстовое поле для показа значения, 
		// на котором установлен выбранный в настоящий
		// момент ползунок
		textField = new JTextField();
		add(sliderPanel, BorderLayout.CENTER);
		add(textField, BorderLayout.SOUTH);
		pack();
	}
	
	/**
	* Вводит ползунки на панели и привязывает 
	* к ним приемник событий
	* @param s Ползунок
	* @param description Описание ползунка
	*/
	public void addSlider(JSlider s, String description)
	{
		s.addChangeListener(listener);
		var panel = new JPanel();
		panel.add(s);
		panel.add(new JLabel(description));
		panel.setAligmentX(Component.LEFT_ALIGMENT);
		var gbc = new GridBagConstraints();
		gbc.gridy = sliderPanel.getComponentsCount();
		gbc.anchor = GirdBagConstraints.WEST;
		sliderPanel.add(panel, gbc);
	}
}