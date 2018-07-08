#include <iostream>
#include <stack>

using namespace std;

class MyQueue
{
	public:
		MyQueue() : size(0)
		{
			// do nothing
		}
		void push(int x)
		{
			while (!front_first.empty()) {
				int elem = front_first.top();
				front_first.pop();
				back_first.push(elem);
			}
			back_first.push(x);
			size++;
		}

		int pop()
		{
			while (!back_first.empty()) {
				int elem = back_first.top();
				back_first.pop();
				front_first.push(elem);
			}

			if (size > 0) size--;

			int temp = front_first.top();
			front_first.pop();
			return temp;
		}

		int peek()
		{
			while (!back_first.empty()) {
				int elem = back_first.top();
				back_first.pop();
				front_first.push(elem);
			}

			return front_first.top();
		}

		bool empty()
		{
			return size == 0;
		}

	private:
		int size;
		stack<int> back_first;
		stack<int> front_first;
};


int main(int argc, char const *argv[])
{
	MyQueue obj;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	cout << obj.peek() << endl;
	cout << obj.empty() << endl;
	obj.pop();
	cout << obj.peek() << endl;
	cout << obj.empty() << endl;
	obj.pop();
	cout << obj.peek() << endl;
	cout << obj.empty() << endl;
	obj.pop();
	cout << obj.empty() << endl;
	return 0;
}










