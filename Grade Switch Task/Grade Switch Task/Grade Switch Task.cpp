#include <iostream>
using namespace std;

int main()
{
	char Userchoice;
	cin >> Userchoice;
	switch (Userchoice) {
	case 'A':
		cout << "You Got a First";
		cout << endl;
		break;
	case 'B':
		cout << "You Got a 2:1";
		cout << endl;
		break;
	case 'C':
		cout << "You Got a 2:2";
		cout << endl;
		break;
	case 'D':
		cout << "You Got a Third";
		cout << endl;
		break;
	default:
		cout << "Wrong input: try again";
	}
	return 0;
}