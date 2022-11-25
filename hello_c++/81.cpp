#include <iostream>
#include <vector>


using namespace std;


int main()
{
	int data1[3] = { 0 , 1, 2 };
	int data2[2][2] = { {0 , }, };
	int data3[2][2];

	for (size_t i = 0; i < 3; i++)
	{
		cout << data1[i] << endl;
	}

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			cout << data2[i][j] << endl;
		}
	}

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			cout << data3[i][j] << endl;
		}
	}

	return 0;
}