import java.io.*;

class Chat implements Serializable {

    // Если мы хотим сделать так, чтобы переменная не сериализовалась
    // приемняем ключевое слово transient
    transient String currentID;

    String userName;

    // еще код 
}