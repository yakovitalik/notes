// Интерфейс ISeries

namespace Program107
{
	public interface ISeries
	{
		int GetNext();			// возвратить следующее по порядку число
		void Reset();			// перезапустить
		void SetStart(int x);	// задать начальное значение
	}
}