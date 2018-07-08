#include <iostream>
using namespace std;

string longest_word(string sent)
{
	string temp = "", max_string = "";
	int max_len = 0, temp_len = 0;

	for (int i = 0; i < sent.length(); i++) {
		if (isalpha(sent[i])) {
			temp_len++;
			temp += sent[i];
			if (temp_len > max_len) {
				max_len = temp_len;
				max_string = temp;
			}
		}
		else {
			if (temp_len > max_len) {
				max_len = temp_len;
				max_string = temp;
			}
			temp_len = 0;
			temp = "";
		}
	}
	return max_string;
}

int main(int argc, char const *argv[])
{
	cout << longest_word("Test") << endl;
	cout << longest_word("!aaaaa!") << endl;
	return 0;
}