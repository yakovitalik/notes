import java.util.*;

// В этой программе демонстрируется применение цикла for

public class LotteryOdds {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("How many numbers do you "
				+ "need to draw? ");
		int n = in.nextInt();
		/*
		 * Вычислить биноминальный коэффициент по формуле:
		 * n * (n-1) * (n-2) * ... * (n - k + 1)/(1 * 2 * 3 * ... k)
		 */

		 int lotteryOdds = 1;
		 for(int i = 1; i <= k; i++) {
			lotteryOdds = lotteryOdds * (n - i + 1) / i;

			System.out.println("You odds are 1 in "
					+ lotteryOdds + ". Good luck!");
		 }
	}
}