// Очень простой сервлет

import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

// Пакеты с сервлетами не входят в стандартную библиотеку, 
// их нужно загрузить отдельно

// Большинство обычных сервлетов расширяют класс HttpServlet
// и переопределяют один или несколько его методов.
public class MyServletA extends HttpServlet {

    // Переопределяем метод doGet() для обработки простых 
    // GET-сообщений по HTTP.
    public void doGet(HttpServletRequest request, HttpServletResponse response)  
            throws ServletException, IOException {
        /* 
         * web-сервер вызывает этот метод, передавая ему
         * клиенский запрос и объект response, который будет
         * использоваться для возвращения ответа
         */

        // указываем тип ответа, возвращаемого сервером в 
        // результате работы сервлета
        response.setContentType("text/html");

        // в переменной response хранится исходящший поток, с 
        // помощью которого можно записывать информацию обратно на сервер
        PrintWriter out = response.getWriter();
        String message = "Если вы это читаете, сервлет работает!";

        // эта html страница будет доставлена в браузер
        out.println("<HTML><BODY>");
        out.println("<H1> + message + </H1>");
        out.println("</BODY></HTML>");
        out.close();
    }
}