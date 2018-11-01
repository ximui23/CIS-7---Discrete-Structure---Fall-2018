#include "stdafx.h"
#include <iostream>

using namespace std;

 void TowerOfHanoi(int n, char start, char aux, char end) {
	 if (n == 1) {
		 cout << "Move disk " << n << "from " << start << "to " << end << endl;

	 }
	 else {
		 TowerOfHanoi(n - 1 , start, end, aux);
		 cout << "Move disk " << n << "from " << start << "to " << end << endl;
		 TowerOfHanoi(n - 1 , aux, start, end);
	 }
}


int main()
{
	int input;
	cout << "Tower of Hanoi " << endl;
	cout << "Enter number of disks : ";
	cin >> input;
	
	TowerOfHanoi(input, 'A', 'B', 'C');
    return 0;
}
