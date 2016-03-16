#include <iostream>
using namespace std;
int main()

{
	int var1, var2, var3; // declaration of variables for the conditions
	 // variable to use in the for loop 
		for (int i=1; i < 21; i++) // for loop running from 1 to 20
		{

			var1 = i % 5;
			var2 = i % 3;
			var3 = var1 + var2;

			if (var3 == 0)
				cout << "fizzbuzz" << endl;
			else if (var1 == 0)
				cout << "buzz" << endl;
			else if (var2 == 0)
				cout << "fizz" << endl;
			else
				cout << i << endl;
		}
}

