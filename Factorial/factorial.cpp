#include <iostream>

using namespace std;

int factorial(int x)
{
	int product = 1;
	while (x != 0) {
		product = product * x;
		x--;
	}
	return product;
}

int main(int argc, char const *argv[])
{
	int input;
	while (true) {
		cout << "Enter number: ";
		cin >> input;
		if (input == -1) break;
		cout << factorial(input) << endl;

	}
	return 0;
}