#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	while (x != 0)
	{

		cout << "Please enter a value" << endl;
		cin >> x;

		cout << "The square of the number you have entered is: " << pow(x, 2) << endl;
	}
	system("pause");
	return 0;
}