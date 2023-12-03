import java.util.*;

public class ApplesAndOrangesWithGenerics {
    public static void main(String[] args) {
        ArrayList<Apple> apples = new ArrayList<Apple>();
        for(int i = 0; i < 3; i++) 
            apples.add(new Apple());

        for(int i = 0; i < apples.size(); i++)
            System.out.println(apples.get(i).getId());
        
        // Использование синтаксиса foreach
        for(Apple c : apples)
            System.out.println(c.getId());
    }
}

class Apple {
    private static long counter;
    private final long id = counter++;
    public long getId() { return id; }
}

class Orange {}