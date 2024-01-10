// Создание стека на основе LinkedList

import java.util.LinkedList;

public class Stack {
	private LinkedList<T> storage = new LinkedList<T>();
	public void push(T v) { storage.addFirst(v); }
	public T peek() { return storage.getFirst(); }
	public T pop() { return storage.removeFirst(); }
	public boolean empty() { return storage.isEmpty(); }
	public String toString() { return storage.toString(); }
}