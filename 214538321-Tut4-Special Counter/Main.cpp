#include<iostream>
#include "SpecialCounter.h"

using namespace std;

int main() {

	int Start, Stop, increament, decreament;

	cout << "Please enter a starting point integer" << endl;
	cin >> Start;
	cout << endl;

	cout << "Please enter the stop value:" << endl;
	cin >> Stop;
	cout << endl;

	if (Start > Stop)
		cout << "There is an error, pkease try again";
	else {

		cout << "Please enter a value for the increaments" << endl;
		cin >> increament;

		cout << "please enter a value for the decreaments" << endl;
		cin >> decreament;
	};

	SpecialCounter SpecialCounter1;
}