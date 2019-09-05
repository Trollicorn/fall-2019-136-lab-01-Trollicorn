/*
Mohammed Uddin
CS 135
Lab 1C

write a program that returns whether the given year is a leap year
*/

#include <iostream>
using namespace std;

int is_leap(int year){
	//returns whether a given year is a leap year
	return !((year % 4) || ((year % 100) || (year % 400) ))
	//check is year is a multiple of 4
	//if year is not a multiple of 4, returns false
	//if year is a multiple of 4, checks if year is a multiple of 100
	//if year is a multiple of 100, checks if year is a multiple of 400
	//if year is a multiple of 400, returns true, else false
	//if year is not a multiple of 100, returns true
}


int main(){
	cout << "enter year: ";
	int year;
	cin >> year;
	cout << (year ? "a" : "b");
	cout << endl << endl << (is_leap(year) ? "leap year" : "common year")  << endl;
	return 0;
}
