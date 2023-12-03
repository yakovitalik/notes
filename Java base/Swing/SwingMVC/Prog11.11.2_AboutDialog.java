package dialog;

import java.awt.BorderLayout;

import javax.swing.JButton;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

/**
* Образец модального диалогового окна, в котором
* выводится сообщение и ожидается до тех пор, пока
* пользователь не щелкнет на кнопке ОК
*/
public class AboutDialog extends JDialog
{
	public AboutDialog(JFrame owner)
	{
		super(owner, "AboutDialogTest", true);
		
		// вывести HTML метку по центру окна
		add(
		new JLabel("<html><h1><i>Core Java</i></h1><hr>By Cay Horstman</html>"), 
				BorderLayout.CENTER);
				
		// при выборе кнопки ОК диалоговое окно закрывается
		
		var ok = new JButton("OK");
		ok.addActionListener(event -> setVisible(false));
		
		// ввести кнопку ОК в нижней части окна
		// у южной его границы
		var panel = new JPanel();
		panel.add(ok);
		add(panel, BorderLayout.SOUTH);
		
		pack();
	}
}