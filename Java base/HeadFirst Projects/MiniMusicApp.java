import javax.sound.midi.*;

public class MiniMusicApp {
    public static void main(String[] args) {
        MiniMusicApp mini = new MiniMusicApp();
        mini.play();
    }

    public void play() {

        try {
            // получаем синтезатор и открываем его
            Sequencer player = MidiSystem.getSequencer();
            player.open();

            Sequence seq = new Sequence(Sequence.PPQ, 4);

            // запрашиваем трек у последовательности
            // Трэк содержится внутри последовательности, а миди 
            // данные в треке
            Track track = seq.createTrack();

            // Помещаем в трек миди-события
            ShortMessage a = new ShortMessage();
            a.setMessage(144,1, 44, 100);
            MidiEvent noteOn = new MidiEvent(a, 1);
            track.add(noteOn);

            ShortMessage b = new ShortMessage();
            b.setMessage(128, 1, 44, 100);
            MidiEvent noteOff = new MidiEvent(b, 16);
            track.add(noteOff);

            // передаем последовательность синтезатору, 
            // как-будто вставляем CD в проигрыватель
            player.setSequence(seq);

            // запускаем синтезатор (как-будно нажали кнопку Play)
            player.start();

        } 
        catch(Exception ex) {
            ex.printStackTrace();
        }
        
    }
}