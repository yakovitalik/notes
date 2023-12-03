package timer;

import java.awt.*;
import java.awt.event.*;
import java.time.*;
import java.swing.*;

/**
* В этой программе демонстрируется применение
* таймера
* @version 18.0.2.1 2022-09-12
* @author Vitaliy Yakovlev
*/

public class TimerTest
{
	public static void main(String[] args)
	{
		var listener = new TimerPrinter();
		
		// построить таймер, вызывающий приемник событий
		// каждую секунду
		var timer = new Timer(1000, listener);
		timer.start();
		
		// продолжить выполнение программы до тех пор, пока 
		// пользователь не выберет экранную кнопку "OK"
		JOptionPane.showMessageDialog(null, "Quit program?");
		System.exit(0);
		
	}
}

class TimePrinter implements ActionListener
{
	public void actionPerformed(ActionEvent event)
	{
		System.out.println("At the tone, thi time is " 
			+ Instant.ofEpochMilli(Even.getWhen()));
		
		Toolkit.getDefaultToolkit().beep();
	}
}