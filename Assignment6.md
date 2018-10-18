



#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;

int GCD(int a, int b);


int main()
{
	string input;


	int n1, n2, result;


	do {
		cout << "Please enter the two numbers to find Greatest Common Denominator: " << endl;
		cin >> n1 >> n2;
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		result = GCD(n1, n2);


		high_resolution_clock::time_point t1 = high_resolution_clock::now();

		if (GCD) {
			cout << "The GCD of the numbers is: " << result << endl;
		}

		else {
			cout << "Error: " << endl;
		}

		high_resolution_clock::time_point t2 = high_resolution_clock::now();

		duration<double> time = duration_cast<duration<double>>(t2 - t1);

		cout << "It tooks " << time.count() << " to calculate GCD " << endl;



		cout << "Would you like to do it again?  Enter 'Yes' or 'YES' " << endl;
		cin >> input;

	} while (input == "Yes" || input == "YES");
	  

	return 0;
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

