import java.util.*;

public class SimpleCollection {
    public static void main(String[] args) {
        Collection<Integer> c = new ArrayList<Integer>();

        for(int i = 0; i < 10; i++) {
            c.add(i);       // автоматическая упаковка
        }

        for(Integer i : c)
            System.out.print(i + ", ");
    }
}
