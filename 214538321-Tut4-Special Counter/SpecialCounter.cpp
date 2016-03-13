#include "Counter.h"

using namespace std;

SpecialCounter::SpecialCounter(){
	newDecreament = 0;
	newIncreament = 0;
	}

	void SpecialCounter::Counter(int increaments, int deceaments){
		int i;
		for (i = newStart; i <= newStop; i += increaments)
			cout << "The list of numbers:" << i << endl;

		for (i = newStop; i >= newStart; i -= deceaments)
			cout << "The reverse list is" << i << endl;



	}

	int SpecialCounter::getStartValue() const{
		return newStart;
	}

	int SpecialCounter :: getStopValue() const {
		return newStop;
	}

	void SpecialCounter::setStartValue(int start) {
		newStart = start;
	}

	void SpecialCounter::setStopValue(int stop) {
		newStop = stop;
	}

	void SpecialCounter::setDecreament(int decreament) {
		newDecreament = decreament;
	}

	void SpecialCounter::setIncreament(int increament) {
		newIncreament = increament;
	}