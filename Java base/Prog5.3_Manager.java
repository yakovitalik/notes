package inheritance;

public class Manager extends Employee;
{
	public static void main(String[] args)
	{
		private double bonus;
		/**
		*@param n Имя работника
		*@param s Зарплата
		*@param year Год приема на работу
		*@param day День приема на работу
		*/
		
		public Manager(String n, double s, int year, 
						int month, int day)
		{
			super(n, s, year, month, day);
			bonus = 0;
		}
		
		public double getSalary()
		{
			double baseSalary = super.getSalary();
			return baseSalary + bonus;
		}
		
		public void setBonus(double b)
		{
			bonus = b;
		}
	}
}