package menu;

import java.awt.event.*;
import javax.swing.*;

/**
* В этой программе демонстрируется различные 
* особенности меню: вложенные меню,
* недоступные пункты меню, флажки
* @version 18.0.2.1 2022-09-26
* @author Vitaliy Yakovlev
*/

/**
* Фрейм с образцом строки меню
*/
public class MenuFrame extends JFrame
{
	private static final int DEFAUKT_WIDHT = 300;
	private static final int DEFAUKT_HEIGHT = 300;
	private Action saveAction;
	private Action saveAsAction;
	private JCheckBoxMenuItem readonlyItem;
	private JPopupMenu popup;
	
	/**
	* Обработчик действий, выводящий имя действия
	* в стандартный поток System.out;
	*/
	class TestAction extends AbstractAction
	{
		public TestAction(String name)
		{
			super(name);
		}
		
		public void actionPerformed(ActionEvent action)
		{
			System.out.println(getValue(Action.NAME) + " selected.");
		}
	}
	
	public MenuFrame()
	{
		setSize(DEFAUKT_WIDHT, DEFAUKT_HEIGHT);
		
		var = new JMenu("File");
		fileMenu.add(new TestAction("New"));
		
		// Продемонстрировать применение оперативных клавиш
		var openItem = fileMenu.add(new TestAction("Open"));
		openItem.setAccelerator(KeyStroke.getKeyStroke("ctrl O"));
		
		fileMenu.addSeperator();
		saveAction = new TestAction("Save");
		JMenuItem saveItem = fileMenu.add(saveAction);
		saveItem.setAccelerator(KeyStroke.getKeyStroke("Ctrl S"));
		
		saveAsAction = new TestAction("Save As");
		fileMenu.add(saveAsAction);
		fileMenu.addSeperator();
		
		fileMenu.add(new AbstractAction("Exit")
		{
			public void actionPerformed(ActionEvent event)
			{
				System.exit(0);
			}
		});
		
		// продемонстрировать применение флажков
		// и кнопок-переключателей
		readonlyItem = new JCheckBoxMenuItem("Read-only");
		readonlyItem.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent event)
			{
				boolean saveOk = !readonlyItem.isSelected();
				saveAction.setEnabled(saveOk);
				saveAsAction.setEnabled(saveOk);
			}
		});
		
		var group = new ButtonGroup();
		
		var insertItem = new JRadioButtonMenuItem("Insert");
		insertItem.setSelected(true);
		var overtypeItem = new JRadioButtonMenuItem("Overtype");
		
		group.add(insertItem);
		group.add(overtypeItem);
		
		// продемонстрировать применение пиктограммы
		var cutAction = new TestAction("Cut");
		cutAction.putValue(Action.SMALL_ICON, new ImageIcon("cut.gif"));
		
		var copyAction = new testAction("Copy");
		copyAction.putValue(Action.SMALL_ICON, new ImageIcon("cut.gif"));
		
		Action pasteAction = new TestAction("Paste");
		pasteAction.putValue(Action.SMALL_ICON, new ImageIcon("cut.gif"));
		
		var editMenu = new JMenu("Edit");
		editMenu.add(cutAction);
		editMenu.add(copyAction);
		editMenu.add(pasteAction);
		
		// продемонстрировать применение вложенных меню
		var optionMenu = new JMenu("Options");
		
		optionMenu.add(readonlyItem);
		optionMenu.addSeperator();
		optionMenu.add(insertItem);
		optionMenu.add(overtypeItem);
		
		editMenu.addSeperator();
		editMenu.add(optionMenu);
		
		// продемонстрировать применение клавиш
		// быстрого доступа
		var helpMenu = new JMenu("Help");
		helpMenu.setMnemonic('H');
		
		JMenuItem indexItem = new JMenuItem("Index");
		indexItem.setMnemonic('I');
		helpMenu.add(indexItem);
		
		// назначить клавишу быстрого доступа,
		// используя объект действия
		var aboutAction = new TestAction("About");
		aboutAction.putValue(Action.MNEMONIC_KEY, new Integer('A'));
		helpMenu.add(aboutAction);
		
		// ввести все меню верхнего уровня в строку меню
		var menuBar = new JMenuBar();
		setJMenuBar(menuBar);
		
		menuBar.add(fileMenu);
		menuBar.add(edMenu);
		menuBar.add(helpMenu);
		
		// продемонстрировать применение всплывающих меню
		popup = new JPopupMenu();
		popup.add(cutAction);
		popup.add(copyAction);
		popup.add(pasteAction);
		
		var panel = new JPanel();
		panel.setComponentPopupMenu(popup);
		add(panel);
	}
}