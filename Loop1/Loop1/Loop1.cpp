#include <iostream>
using namespace std;

int main()
{
	double myNum = 20;
	while (myNum > 0) {
		cout << myNum << endl;
		myNum = myNum - 0.5;
	}

	return 0;
}