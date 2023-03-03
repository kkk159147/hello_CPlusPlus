#include <iostream>

using namespace std;

int GetOne() { return 1; }

int Plus(int x, int y = GetOne(), int z = 1) {

	return x + y + z;
}

int main()
{
	int num1 = Plus(1);
	int num2 = Plus(1, 2);
	int num3 = Plus(1, 2, 3);

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;

	return 0;
}

