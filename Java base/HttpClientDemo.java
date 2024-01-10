import java.io.InputStream;
import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpHeaders;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;

/**
* В этой программе демонстрируется применение
* простого HTTP клиента.
* В нем демонстрируется отправка запроса, отображение тела ответа
* и получение списка заголовков ответа
* 
* @version 17.0 2024-01-10
* @author Vitaliy Yakovlev
*/

public class HttpClientDemo
{
	public static void main(String[] args)
	{
		// Получить клиент со стандартными параметрами
		HttpClient myHttpClient = HttpClient.newHttpClient();

		// Создать запрос
		HttpRequest myRequest = HttpRequest.newBuilder(new URI("http://www.google.com/")).build();

		// Отправить запрос и получить ответ. Для тела применяется объект InputStream
		HttpResponse<InputStream> myResponse = myHttpClient.send(myRequest, 
				HttpResponse.BodyHandlers.ofInputStream());
		
		// Отобразить код ответа и метод запроса
		System.out.println("Код ответа: " + myResponse.statusCode());
		System.out.println("Метод запроса: " + myRequest.method());

		// Получить заголовок из ответа
		HttpHeaders headers = myResponse.headers();

		// Получить карту с полями заголовка
		Map<String, List<String>> headersMap = headers.map();
		Set<String> headersField = headersMap.keySet();
		System.out.println("\nЗаголовок:");

		// Отобразить все ключи и значения заголовка
		for(String key : headersField) {
			System.out.println(" Ключ: " + key + " Значение: " + headersMap.get(key));
		}

		// Отобразить тело
		System.out.println("\nТело: ");

		InputStream input = myResponse.body();
		int c;

		// Прочитать и отобразить все тело
		while ((c = input.read()) != -1) {
			System.out.println((char) c);			
		}
	}
}