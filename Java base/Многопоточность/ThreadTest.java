public class ThreadTest {
    public static void main(String[] args) {
        Runnable threadJob = new MyRunnable();

        /* Передаем экземпляр Runnable в конструктор Thread.
        * Благодаря этому, поток знает, какой метод нужно поместить
        * на дно нового стека. Иными словами это первый метод, который
        * будет запущен */
        Thread myThread = new Thread(threadJob);

        // Запускаем поток
        myThread.start();

        System.out.println("Возвращаемся в метод main");
    }
}