#include <iostream>
using namespace std;

int main() 
{
	float weight;
	float height;
	cout << "BMI CALCULATOR" << endl;
	cout << "Enter your height in cm below:" << endl;
	cin >> height;
	height = height / 100;
	cout << "enter your weight in kilos below:" << endl;
	cin >> weight;
	float denominator = height * height;
	float result = weight / denominator;
	if(result<18.5) 
	{
		cout << "Your Underweight!!" << "(" << result << ")";
	}
	if (result > 18.5 and result <25.0) 
	{
		cout << "your fit and healthy!!" << "(" << result << ")";
	}
	if (result > 25.0) 
	{
		cout << "Your overweight!!" << "(" << result << ")";
	}

	
}
