// Константы класса

public class Constants2 {
	
	public static final double CM_PER_INCH = 2.54;
	
	public static void main(String[] args) {
		
		double paperWidht = 8.5;
		double paperHeight = 11;
		
		System.out.println("Paper size in centimeters: "
				+ paperWidht * CM_PER_INCH + " by "
				+ paperHeight * CM_PER_INCH);
	}
}