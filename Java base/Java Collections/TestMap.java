/*
* Пример отображения
*/

import java.util.*;

public class TestMap {
    public static void main(String[] args) {

        // HashMap нуждается в двух типовых параметрах: 
        // для ключа и для значения
        HashMap<String, Integer> scores = new HashMap<String, Integer>();

        // вместо add() используется put()
        // он также принимает два значения
        scores.put("Кэти", 42);
        scores.put("Берт", 343);
        scores.put("Скайлер", 420);

        System.out.println(scores);

        // метод get() принимает ключт возвращает значение
        System.out.println(scores.get("Берт"));
    }
}
