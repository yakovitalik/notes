import java.util.Scanner;

import javax.sound.sampled.SourceDataLine;

public class DoWhile {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int value;
        do {
            System.out.println("Введите 5: ");
            value = scanner.nextInt();
        } while(value != 5);
        System.out.println("Спасибо что ввели 5)");
    }
}