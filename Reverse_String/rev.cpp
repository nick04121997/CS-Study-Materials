#include <iostream>

using namespace std;

void swap1(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

string rev(string str)
{
	string copy = str;
	for (int i = 0; i < copy.length()/2; i++) {
		swap1(copy[i], copy[copy.length()-1-i]);
	}
	return copy;
}

int main(int argc, char const *argv[])
{
	string input;
	while (true) {
		cout << "Enter string: ";
		getline(cin,input); 
		if (input == "") break;
		cout << rev(input) << endl;

	}
	return 0;
}