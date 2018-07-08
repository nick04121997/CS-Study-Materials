#include <iostream>

using namespace std;

void swap1(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void rotate(int arr[], int len, int rot)
{
	for (int i = 0; i < len/2; i++) {
		swap1(arr[i], arr[(i+rot)%len]);
		for (int x = 0; x < len; x++) {
			cout << arr[x] << " ";
		}
		cout << endl;
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {10, 9, 8, 5, 30};
	int rot = 2;
	int n = sizeof(arr)/sizeof(arr[0]);

	rotate(arr, n, rot);
	cout << "final: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}