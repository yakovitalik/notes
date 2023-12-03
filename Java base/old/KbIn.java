class KbIn {
public static void main (String args[]) 
trows java.ioIOException {
char ch;
System.out.print ("Нажмите нужную клавишу, а затем нажмите Enter: ");
ch = (char) System.in.read (); //получить символ
System.out.println ("Вы нажали клавишу " + ch);
}
}