// Project5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This culator calculates the values of arithmetic expressions.
//project program done by : VALERIIA DROZDOVA 

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	char op;
	float num1, num2;
	bool done = false;

	cout << "enter operator either + or - or * or / or ^ or ! or r for a root: ";
	cin >> op;

	switch (op)
	{
	case '+':
		cout << "enter one operand: ";
		cin >> num1;
		cout << "enter another operand: ";
		cin >> num2;
		cout << num1 + num2;
		break;
	case '-':
		cout << "enter one operand: ";
		cin >> num1;
		cout << "enter another operand: ";
		cin >> num2;
		cout << num1 - num2;
		break;
	case '*':
		cout << "enter one operand: ";
		cin >> num1;
		cout << "enter another operand: ";
		cin >> num2;
		cout << num1 * num2;
		break;
	case '/':
		cout << "enter one operand: ";
		cin >> num1;
		cout << "enter another operand: ";
		cin >> num2;
		cout << num1 / num2;
		break;
	case '^':
		cout << "enter operand: ";
		cin >> num1;
		cout << "enter power of number: ";
		cin >> num2;
		cout << pow(num1, num2);
		break;
	case 'r':
		cout << "enter operand: ";
		cin >> num1;
		cout << "enter number for square: ";
		cin >> num2;
		cout << pow(num1, 1. / num2);
		break;
	case 'q':
		cout << "bye\n";
		break;
	default:
		//if the operator is other than +, -, *, or /, error message is shown
		cout << "error! operator is not correct";
		break;
	}

	{
		cout << "\nPlease enter expression (we can handle +, -, *, and /)\n";
		cout << "add an x to end expression (e.g., 1+2*3x): ";
		int lval = 0;
		int rval;
		cin >> lval; // read leftmost operand
		if (!cin) ("error") == ("no first operand");
		for (char op; cin >> op; ) { // ready operator and right-hand operand
		// repeatedly
			if (op != 'x') cin >> rval;
			if (!cin) ("error") == ("no second operand");

			if (op == 'q')
			{
				done = true;
				std::cout << "bye\n";
				break;
			}
			switch (op) {
			case '+':
				lval += rval; // add: lval = lval + rval
				break;
			case '–':
				lval -= rval; // subtract: lval = lval – rval
				break;
			case '*':
				lval *= rval; // multiply: lval = lval * rval
				break;
			case '/':
				lval /= rval; // divide: lval = lval / rval
				break;
			default: // not another operator: print result
				cout << "Result: " << lval << '\n';
				//keep_window_open();
				return 0;
			}

		}
		("error") == ("bad expression");
	}

	return 0;
}


string delUnnecessary(string& str)
{
	int size = str.length();
	for (int j = 0; j <= size; j++)
	{
		for (int i = 0; i <= j; i++)
		{
			if (str[i] == ' ' && str[i + 1] == ' ')
			{
				str.erase(str.begin() + i);
			}
			else if (str[0] == ' ')
			{
				str.erase(str.begin());
			}
			else if (str[i] == '\0' && str[i - 1] == ' ')
			{
				str.erase(str.end() - 1);
			}
		}
	}
	return str;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file