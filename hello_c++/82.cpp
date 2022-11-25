#include <iostream>

using namespace std;

int main()
{
	int data[3] = { 0 , 1, 2 };

	data[0] += 10;
	data[1] += 100;
	data[2] -= 2;

	for (size_t i = 0; i < 3; i++)
	{
		cout << data[i] << endl;
	}



	return 0;
}