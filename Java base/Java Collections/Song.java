/*
* Класс Song, объекты которого можно сравнивать
* С переопределенными методами hashCode() и equals()
*/

class Song implements Comparable<Song> {
    String title;
    String artist;
    String rating;
    String bpm;

    public boolean equals(Object aSong) {
        Song s = (Song) aSong;

        /* 
         * Так как title это строка, и у нее есть переопределенный 
         * метод equals(), нужно лишь спросить у переменной title, 
         * совпадает ли ее значение с названием переданной песни
         */
        return getTitle().equals(s.getTitle());
    }

    public int hashCode() {
        // и здесь тоже самое
        return title.hashCode();
    }

    public int compareTo(Song s) {
        return title.compareTo(s.getTitle());
    }

    Song(String t, String a, String r, String b) {
        title = t;
        artist = a;
        rating = r;
        bpm = b;
    }

    public String getTitle() {
        return title;
    }

    public String getArtist() {
        return artist;
    }

    public String getRating() {
        return rating;
    }

    public String getBpm() {
        return bpm;
    }

    public String toString() {
        return title;
    }
}