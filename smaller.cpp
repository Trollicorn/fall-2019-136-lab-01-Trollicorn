/*
Mohammed Uddin
CS 135
Lab 1A

write a program that returns  the smallest of two given integers
*/

#include <iostream>
using namespace std;

int smaller(int a, int b){
	//returns the smallest of two given integers
	return a < b ? a : b;
}


int main(){
	cout << "enter first number: ";
	int a, b;
	cin >> a;
	cout << "enter second number: ";
	cin >> b;
	cout << endl << endl << "the smaller of the two is " << smaller(a,b) << endl;
	return 0;
}
