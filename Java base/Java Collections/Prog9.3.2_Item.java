package treeSet;

import java.util.*;

/**
* Описание изделия и его номер по каталогу
* 
* @version 18.0.2.1 2022-09-20
* @author Vitaliy Yakovlev
*/

public class Item implements Comparable<Item>
{
	private String description;
	private int partNumber;
	
	/**
	* Конструирует объект изделия
	* 
	* @param aDescription Описание изделия
	* @param aPartNumber Номер изделия по каталогу
	*/
	public Item(String aDescription, int aPartNumber)
	{
		description = aDescription;
		partNumber = aPartNumber;
	}
	
	/**
	* Получает описание данного изделия
	*
	* @return Описание изделия
	*/
	public String getDescription()
	{
		return description;
	}
	
	public String toString()
	{
		return "[description=" + description + ", partNumber="
				+ partNumber + "]";
	}
	
	public boolean equals (Object otherObject)
	{
		if(this == otherObject) return true;
		if(otherObject == null) return false;
		if(getClass() != otherObject.getClass())
			return false;
		Item other = (Item) otherObject;
		return Objects.equals(description, other.description)
				&& partNumber == other.partNumber;
	}
	
	public int hashCode()
	{
		return Objects.hash(description, partNumber);
	}
	
	public int compareTo(Item other)
	{
		int diff  = Integer.compare(partNumber, other.partNumber);
		return diff != 0 ? diff : description.compareTo(other.description);
	}
}