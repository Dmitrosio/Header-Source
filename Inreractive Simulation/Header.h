#pragma once
#include <string>
#include <iostream>
using namespace std;
//string function that takes in the prompt and returns the name of the user
string askName(string prompt) {
	string name;
	cout << prompt;
	cin >> name;
	return name;
}

//int function that takes in the prompt and returns the age of the user
int askAge(string prompt) {
	int age;
	cout << prompt;
	cin >> age;
	return age;
}

//string function that takes in the prompt and returns the country where the user is from
string askCountry(string prompt) {
	string country;
	cout << prompt;
	cin >> country;
	return country;
}

//string function that takes in the prompt and returns the college the user is attending
string askCollege(string prompt) {
	string college;
	cout << prompt;
	cin >> college;
	return college;
}

// this function takes all the variables below and displays them
void displayInformation(string name, int age, string country, string college) {
	cout << "Your name is " << name << ". You are " << age << " years old" << endl;
	cout << "You are from " << country << ". You are currently attending " << college << endl;

	//meme alert
	if (college == "UAT" || college == "Uat" || college == "uat") {
		cout << "Dude, really? You're such a loser." << endl;
	}
}