#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	   
	bool isTrue = true;
	bool isFalse = false;

	if (isTrue && isFalse)
	{
		cout << true << endl;
	}
	else {
		cout << false << endl;
	}

	if (x == 10 || isTrue == false)
	{
		cout << "x�� 10�̰ų� isTrue �� false" << endl;

	}
	else {
		cout << "x�� 10�̾ƴϰų� isTrue �� true" << endl;
	}

	if (!isFalse)
	{
		cout << "�������� False" << endl;
	}
	else
	{
		cout << "�������� true" << endl;
	}
}