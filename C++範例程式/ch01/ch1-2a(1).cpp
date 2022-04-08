/*
output num average in c++
*/
#include <iostream>
using namespace std;

int main() {
	int num;
	int sum = 0;
	int count = 0;
	cout << "Enter a number: ";
	cin >> num;
	while (num != -1) {
		sum += num;
		count++;
		cout << "Enter a number: ";
		cin >> num;
	}
	cout << "The average is " << sum / count << endl;
	return 0;
}