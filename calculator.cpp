#include "calculator.h"
#include <iostream>
#include <string>
using namespace std;
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}
int Add (double a, double b)
{
	return a + b + 0.5;
}
int main ()
{
	string operation;
	int firstv, secondv;
	std::cout << "Input a mathematical operation: \n";
	std::cout << "+ Add \n- Sub \n* Mul \n/ Div \n";
	std::cin >> operation;
	std::cout << "Input two values: \n";
	std::cin >> firstv;
	std::cin >> secondv;
	if (operation == "+") {
		std::cout<<"Calculator: \n" << firstv << operation << secondv << '=' << Add(firstv, secondv) << "\n";
	}
	return 0;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}
int Calculator::Mul (double a, double b)
{
	return a * b;
}
double Calculator::Div (double a, double b)
{
	return a / b;
}
