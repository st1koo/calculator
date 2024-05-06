#include <iostream>
#include <cmath>

using namespace std;

int main()
{
//define variables
	string operation;
	double number1, number2;
	
	//get user input
	cout << "Enter First Number: ";
	cin >> number1;
	cout << "Enter Operation (+, -, /): ";
	cin >> operation;
	cout << "Enter Second Number: ";
	cin >> number2;

//checking entered operation (if else statment)
	if (operation == "+") {
		cout << number1 + number2;
	} else if (operation == "-") {
		cout << number1 - number2;
	return 0;
}
	else if (operation == "+") {
		cout << number1 + number2;
	}
	else if (operation == "-") {
		cout << number1 - number2;
		return 0;
	}
}