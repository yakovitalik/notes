package preferences;

import java.awt.EventQueue;
import java.awt.event.*;
import java.io.*;
import java.util.prefs.*;
import javax.swing.*;

import org.w3c.dom.events.Event;

/**
* В этой программе проверяются глобальные параметры
* настройки. В ней запоминаются положение и размеры
* фрейма, а также последний выбранный файл. 
* @version 18.0.2.1 2022-09-22
* @author Vitaliy Yakovlev
 */

public class ImageViewer
{
    public static void main(String[] args) 
    {
        EventQueue.invokeLater(() -> {
            var frame = new ImageViewerFrame();
            frame.setTitle("ImageViewer");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setVisible(true);
        });
    }
}

/**
 * Средство просмотра изображения, восстанавливающее
 * положение, размеры, и просматриваемое изображение из
 * пользовательских глобальных параметров настройки и
 * обновляющее эти параметры по завершению работы
 */
class ImageViewerFrame extends JFrame
{
    private static final int DEFAULT_WIDTH = 300;
    private static final int DEFAULT_HEIGTH = 200;

    public ImageViewerFrame()
    {
       Preferences root = Preferences.userRoot();
	   Preferences node = root.node(
			"/com/horstman/corejava/ImageViewer");
		// получить положение, размеры и заглавие из свойств
		int left = node.getInt("left", 0);
		int top = node.getInt("width", DEFAULT_WIDTH);
		int height = node.getInt("height", DEFAULT_HEIGTH);
		setBounds(left, top, width, height);
		image = node.get("image", null);
		var label = new JLabel();
		if(image != null)
			label.setIcon(new ImageIcon(image));
		
		addWindowListener(new WindowAdapter() 
		{
			public void windowClosing(WindowEvent event)
			{
				node.putInt("left", getX());
				node.putInt("top", getY());
				node.putInt("width", getWidth());
				node.putInt("height", getHeight());
				node.put("image", image);
			}
		});
		
		// воспользоваться меткой для воспроизведения изображений
		add(label);
		
		// установить селектор файлов
		vor chooser = new JFileChooser();
		chooser.setCurrentDirectory(new File("."));
		
		// установить строку меню
		var menuBar = new JMenuBar();
		setJMenuBar(menuBar);
		
		var menu = new JMenu("File");
		menuBar.add(menu);
		
		var openItem = new JMenuItem("Open");
		menu.add(openItem);
		openItem.addActionListener(event -> {
			// отобразить диалоговое окно селектора файлов
			int result = chooser.showOpenDialog(null);
			
			// если файл выбран, установить его в виде
			// пиктограммы метки
			if(result == JFileChooser.APPROVE_OPTION)
			{
				image = chooser.getSelectedFile().getPath();
				label.setIcon(new ImageIcon(image));
			}
		});
		
		var exitItem = new JMenuItem("Exit");
		menu.add(exitItem);
		exitItem.addActionListener(event -> System.exit(0));
	}
}