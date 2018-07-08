#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target)
{
	int left = 0;
	int right = numbers.size()-1;

	while (left < right) {
		int sum = numbers[left] + numbers[right];
		cout << "SUM: " << sum << endl;
		if (sum == target) {
			vector<int> vec{numbers[left], numbers[right]};
			cout << "GOT HERE" << endl;
			return vec;
		}
		else if (sum < target) {
			left++;
		}
		else {
			right--;
		}
	}  
	vector<int> bad{0,0};
	return bad;
}

int main(int argc, char const *argv[])
{
	vector<int> vect{ 10, 20, 30 };
	int sum = 30;
	vector<int> test = twoSum(vect, sum);
	for (int i = 0; i < test.size(); i++) {
		cout << test[i] << " ";
	}
	cout << endl;
	return 0;
}