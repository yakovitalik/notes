import java.util.*;

class Apple {
    private static long counter;
    private final long id = counter++;
    public long getId() { return id; }
}

class Orange {}

public class AppleAndOrangesWithouGenerics {
    @SuppressWarnings("uncheked")
    public static void main(String[] args) {
        ArrayList apples = new ArrayList();
        for(int i = 0; i < 3; i++) 
            apples.add(new Apple());

        // Не мешает добавить Orange в apples:
        apples.add(new Orange());
        for(int i = 0; i < apples.size(); i++)
            ((Apple)apples.get(i)).getId();
        // Объект Orange обнаруживается только во время выполнения
    }
}
