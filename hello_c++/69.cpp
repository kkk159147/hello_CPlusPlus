#include <iostream>

using namespace std;

int main()
{
	int num1 = 100;
	int *pointer1 = &num1;

	double num2 = 23.4;
	double *pointer2 = &num2;

	cout << num1 << " / " << sizeof(num1) << endl;
	cout << pointer1 << " / " << sizeof(pointer1) << endl;

	cout << num2 << " / " << sizeof(num2) << endl;
	cout << pointer2 << " / " << sizeof(pointer2) << endl;


	return 0;

}