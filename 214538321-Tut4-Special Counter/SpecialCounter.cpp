#include "Counter.h"

using namespace std;

SpecialCounter::SpecialCounter(){
	int i;
	for (i = 0; i <= 255; i++) {
		cout << "the list of the numbers:" << i << endl;
	}
		for (i = 255; i <= 0; i--) {
			cout << "the list of the numbers in reverse:" << i << endl;

		}
	}

	SpecialCounter::SpecialCounter(int increaments, int deceaments){
		int i;
		for (i = newStart; i <= NewStop; i += increaments)
			cout << "The list of numbers:" << i << endl;

		for (i = NewStop; i >= newStart; i -= deceaments)
			cout << "The reverse list is" << i << endl;



	}