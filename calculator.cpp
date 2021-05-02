#include <iostream>
using namespace std;

int add(int x, int y) 
{
	int result = x + y;
	return result;
}

int sub(int x, int y)
{
	int result = x - y;
	return result;
}

int mul(int x, int y)
{
	int result = x * y;
	return result;
}

float divide(int x, int y)
{
	int result = x / y;
	return result;
}

int main()
{	
	string command;
	cout << "Enter Which Operation Would You Like To Perform based one these commands:" << endl;
	cout << "for addition use a" << endl;
	cout << "for subtraction use s" << endl;
	cout << "for multiplication use m" << endl;
	cout << "for division use d" << endl;
	cout << "Enter Your Command below:" << endl;
	cin >> command;
	if(command=="a") 
	{
		int num_1;
		int num_2;
		cout << "enter the first number:" << endl;
		cin >> num_1;
		cout << "enter the second number:" << endl;
		cin >> num_2;
		cout << "ans:" << add(num_1, num_2) << endl;
	}

	if (command == "s")
	{
		int num_1;
		int num_2;
		cout << "enter the first number:" << endl;
		cin >> num_1;
		cout << "enter the second number:" << endl;
		cin >> num_2;
		cout << "ans:" << sub(num_1, num_2) << endl;
	}

	if (command == "m")
	{
		int num_1;
		int num_2;
		cout << "enter the first number:" << endl;
		cin >> num_1;
		cout << "enter the second number:" << endl;
		cin >> num_2;
		cout << "ans:" << mul(num_1, num_2) << endl;
	}

	if (command == "d")
	{
		int num_1;
		int num_2;
		cout << "enter the first number:" << endl;
		cin >> num_1;
		cout << "enter the second number:" << endl;
		cin >> num_2;
		cout << "ans:" << divide(num_1, num_2) << endl;
	}


	return 0;

}
