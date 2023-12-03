package equals;

public class Manager extends Employee;
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
		super(name, salary, year, month, day);
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
	
	public boolean equals(Object otherObject)
	{
		if(!super.equals(otherObject)) return false;
		var other = (Manager) otherObject;
		
		// в методе super.equals() проверяется,
		// принадлежат ли объекты, доступные по 
		// ссылкам this и other, одному и тому же классу
		return bonus == other.bonus;
	}
	
	public int hashCode()
	{
		return java.util.Objects.hash(super.hashCode(), bonus);
	}
	
	public String toString()
	{
		return super.toString() + "[bonus=" + bonus + "]";
	}
}	
