#include <iostream>
using namespace std;
int main()
{
	int a, b, c; //variables that 
	for (int i = 1; i < 21; i++) //The for loop that will run from 1-20
	{
		a = i % 3; //The variables are being used to test the conditions
		b = i % 5;
		c = a + b;

		if (c == 0)
			cout << "fizz buzz" << endl;
		else if (b == 0)
			cout << "buzz" << endl;
		else if (a == 0)
			cout << "fizz" << endl;
		else
			cout << i << endl;
	}
}