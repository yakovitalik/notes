DateTime thisYear = new DateTime(2011, 1, 1);
bool isLeapYear = DateTime.IsLeapYear(thiYear.Year);
/////////////////////////////////////////////////////////////

// Установка текущего времени методом Now и преобразование 
// одног времени в другое
DateTime thisMoment = DateTime.Now;
DateTime anHourFromNow = thisMoment.AddHours(1);
/////////////////////////////////////////////////////////////

Выделить определенные части DataTime
int year = DateTime.Now.Year;	// Например, 2008
DayOfWeek dayOfWeek = DateTime.Now.DayOfWeek; // Например, воскресенье
/////////////////////////////////////////////////////////////

// Другие полезные манипуляции типом DateTime:
DateTime date = DateTime.Today;			// Получение даты
TimeSpan time = thisMoment.TimeOfDay;		// Получение времени
TimeSpan duration = new TimeSpan(3, 0, 0, 0);	// Продолжительность в днях
DateTime threeDaysFromNow = thisMoment.Add(duration);	
