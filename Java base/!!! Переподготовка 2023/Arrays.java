public class Arrays {
    public static void main(String[] args) {
        int number = 10;                // примитивный тип данных [10]
        int[] numbers = new int[5];     // массив, numbers -> [массив] Ссылочный тип
        for(int i = 0; i < numbers.length; i++) {
            numbers[i] = i * 10;
        }
        for(int j = 0; j < numbers.length; j++) {
            System.out.println(numbers[j]);
        }

        System.out.println();

        for(int k : numbers) 
            System.out.println(k);

        System.out.println();

        int[] numbers1 = {1, 2, 3};
        for(int k : numbers1)
            System.out.println(k);
    }
}
