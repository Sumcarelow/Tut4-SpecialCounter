#include "Counter.h"

using namespace std;

SpecialCounter::SpecialCounter(){
	newDecreament = 0;
	newIncreament = 0;
	}

SpecialCounter::~SpecialCounter(){


}
	void SpecialCounter::Counter(){
		int i;
		for (i = newStart; i <= newStop; i += newIncreament)
			cout << "The list of numbers:" << i << endl;

		for (i = newStop; i >= newStart; i -= newDecreament)
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