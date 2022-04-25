//Dmitrii Orlov
//3/06/2022

#include <iostream>
#include <string>
//using header file
#include "Header.h"

int main()
{
	cout << "Welcome to our 1st app, that gets all the information about you! We don't care about your conscent and we will share it with everyone who will pay well for it! Sincerely, your FapBook" << endl;;

	//prompts
	string name = askName("What's your name? ");
	int age = askAge("How old are you? ");
	string country = askCountry("Where are you from? ");
	string college = askCollege("What college/univerity are you attending? ");

	//calling of the function
	displayInformation(name, age, country, college);
}
