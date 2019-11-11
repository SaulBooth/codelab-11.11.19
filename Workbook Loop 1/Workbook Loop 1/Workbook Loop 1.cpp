#include <iostream>
using namespace std;

int main() {
	cout << "please input either 1 or 2" << endl;
	while (true) {
		int userInput;
		cin >> userInput;
		switch (userInput) {
		case 1:
			cout << "User input was 1" << endl;
			break;
		case 2:
			cout << "User input was 2" << endl;
			break;
		default:
			cout << "invalid input: input 1 or 2";
		}
	}
}
