#include<iostream>

#ifndef COUNTER_H
#define COUNTER_H


class SpecialCounter{

private:int newStart;   //Member variables  
		int NewStop;


public: SpecialCounter();   //Default Constructer and destructor
		~SpecialCounter();

		SpecialCounter(int, int);  //Overload Constructor


};
#endif