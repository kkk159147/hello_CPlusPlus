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
		cout << "x가 10이거나 isTrue 가 false" << endl;

	}
	else {
		cout << "x가 10이아니거나 isTrue 가 true" << endl;
	}

	if (!isFalse)
	{
		cout << "원래값은 False" << endl;
	}
	else
	{
		cout << "원래값은 true" << endl;
	}
}