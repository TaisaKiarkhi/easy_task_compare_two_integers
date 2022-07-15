#include <iostream>
using namespace std;

int main() {

	int a{};
	int b{};

	cout << "Hello! Enter two integers and I will calculate if they are equal. Enter the first integer: ";
	cin >> a;
	cout << "Enter the second integer: ";
	cin >> b;

	if (a == b) {
		cout << "The numbers are equal!";
	}
	else {
		cout << "The numbers are not equal.";
	}

	return 0;
}