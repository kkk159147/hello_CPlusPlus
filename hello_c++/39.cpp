#include <iostream>

using namespace std;

int main()
{
	int x = 0;


	do 
	{
		x++;

		if (x % 3 == 0)
		{
			continue;

		}
		else {
			cout << x << endl;
		}
	} while (x < 10);

	return 0;

}