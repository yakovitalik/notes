import javax.swing.JFrame;

/*
* 
*/

public class Dick2
{
	public static void main(String[] args)
	{
		ComboBoxFrame r = new ComboBoxFrame("Расчет мощности трансформатора");
		r.setVisible(true);								// делает окно видимым
		r.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);	// определяет что делает кнопка выхода
		r.setSize(370, 260);					// задает размеры окна
		r.setResizable(false);					// запрещает изменять размеры окна
		r.setLocationRelativeTo(null);					// размещает окно в центре экрана
	}
}