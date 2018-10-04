// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int GCD(int a, int b);


/*
*/

int main()
{
	int n1, n2, result;

	cout << "Please enter the two numbers to find Greatest Common Denominator: " << endl;
	cin >> n1 >> n2;

	result = GCD(n1, n2);

	if (GCD) {
		cout << "The GCD of the numbers is: " << result << endl;
	}

	else {
		cout << "Error: " << endl;
	}
}


int GCD(int a, int b) {
	while (a != b) {
		if (a > b) {
			if (a%b == 0) {
				return b;
			}
			return GCD(b, a%b);
		}
		else {
			GCD(b, a);
			if (b % a == 0) {
				return a;
			}
			return GCD(a, b%a);
		}
	}
	return a;

}
