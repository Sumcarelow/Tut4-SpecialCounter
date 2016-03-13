#include<iostream>

#ifndef COUNTER_H
#define COUNTER_H


class SpecialCounter{

private:int newStart;   //Member variables  
		int newStop;
		int newIncreament;
		int newDecreament;


public: SpecialCounter();   //Default Constructer and destructor
		~SpecialCounter();

		void Counter();  //Overload Constructor

		//accesor functions
		int getStartValue() const;
		int getStopValue() const;

		//mutator functions
		void setStartValue(int);
		void setStopValue(int);
		void setDecreament(int);
		void setIncreament(int);
};
#endif