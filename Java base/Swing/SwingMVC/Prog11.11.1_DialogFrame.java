package dialog;

import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;

/**
* В этой программе демонстрируется применение
* диалоговых окон
* @version 18.0.2.1 2022-09-27
* @author Vitaliy Yakovlev
*/

/**
* Фрейм со строкой меню, при выборе команды File->About
* из которого появляется диалоговое окно About
*/

public class DialogFrame extends JFrame
{
	private static final int DEFAULT_WIDTH = 300;
	private static final int DEFAULT_HEIGHT = 200;
	private AboutDialog dialog;
	
	public DialogFrame()
	{
		setSize(DEFAULT_WIDTH, DEFAULT_HEIGHT);
		
		// сконструировать меню File
		var = new JMenuBar();
		setJMenuBar(menuBar);
		var FileMenu = new JMenu("File");
		menuBar.add(fileMenu);
		
		// ввести в меню пункты About и Exit
		
		// При выборе пункта меню About открывается
		// одноименное диалоговое окно
		var aboutItem = new JMenuItem("About");
		aboutItem.addActionListener(event -> {
			if(dialog == null) 			// в первый раз
				dialog = new AboutDialog(DialogFrame.this);
			dialog.setVisible(true);	// показать диалоговое окно
		});
		fileMenu.add(aboutItem);
		
		// При выборе пункта меню Exit происходит
		// выход из программы
		
		var exitItem = new JMenuItem("Exit");
		exitItem.addActionListener(event -> System.exit(0));
		fileMenu.add(exitItem);
	}
}