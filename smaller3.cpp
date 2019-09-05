/*
Mohammed Uddin
CS 135
Lab 1B

write a program that returns the smallest of three given integers
*/

#include <iostream>
using namespace std;

int smaller(int a, int b){
	//returns the smallest of two given integers
	return a < b ? a : b;
}

int smaller3(int a, int b, int c){
	//returns the smallest of three given integers
	return smaller(smaller(a,b),c);
}

int main(){
	cout << "enter first number: ";
	int a, b, c;
	cin >> a;
	cout << "enter second number: ";
	cin >> b;
	cout << "enter third number: ";
	cin >> c;
	cout << endl << endl << "the smaller of the three is " << smaller3(a,b,c) << endl;
	return 0;
}
