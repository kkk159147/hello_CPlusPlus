#include <iostream>
#include <string>


using namespace std;


int Plus(int arg1, int arg2) {
	return arg1 + arg2;
}

double Plus(double arg1, double arg2, double arg3) {
	return arg1 + arg2 + arg3;
}

int main()
{
	int num1 = Plus(2, 4);
	double num2 = Plus(2.4, 4.7, 8.4);

	cout << num1 << endl;
	cout << num2 << endl;


	return 0;
}