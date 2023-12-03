/* Программа расчета задержки радиосигнала между Марсом и Землей */

#include <iostream>
using namespace std;

int main () {
	double distance;
	double ligthspeed;
	double delay;
	double delay_in_min;

	distance = 34000000.0;
	ligthspeed = 186000.0;
	
	delay = distance / ligthspeed;
	delay_in_min = delay / 60;

	count << "Задержка радиосигнала составит: " << delay << " секунд, или " << delay_in_min << " минут."
	
	return 0;
}