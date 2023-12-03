public class ClassesAndObjects {
    public static void main(String[] args) {
        Person person1 = new Person();
        person1.setName("Григорий");
        person1.setAge(33);
        System.out.println("Выводим значение в main: " + person1.getName());
        System.out.println("Выводим значение в main: " + person1.getAge());
        person1.speak();
    }
}

class Person {
    private String name;
    private int age;

    public void setName(String username) {
        name = username;
    }

    public String getName() {
        return name;
    }

    public void setAge(int userage) {
        age = userage;
    }

    public int getAge() {
        return age;
    }

    int calculateYearsToRetirement() {
        int years = 65 - age;
        return years;
    }

    void speak() {
        for(int i = 0; i < 3; i++) {
            System.out.println("Меня зовут " + name + ", мне " + age + " лет");
        }
    }
}