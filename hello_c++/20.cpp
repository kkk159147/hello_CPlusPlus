#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 6;
	   
	bool isTrue = false;

	if (x > y)
	{
		isTrue = true;
	}
	else {
		isTrue = false;

	}
	if (isTrue)
	{
		cout << "x가 큼" << endl;

	}
	else {
		cout << "y가 큼" << endl;

	}
}