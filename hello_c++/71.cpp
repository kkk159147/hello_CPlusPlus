#include <iostream>


using namespace std;

int main()
{
	const int kSize = 3;

	int num1[kSize] = { 10, 20, 30 };
	int* pointer1 = num1;

	int no1 = 1;
	int no2 = 2;
	int no3 = 3;

	int* pointer2[kSize] = { &no1, &no2, &no3 };

	for (size_t i = 0; i < kSize; i++)
	{
		cout << *(pointer1 + i) << endl;
	}
	for (size_t i = 0; i < kSize; i++)
	{
		cout << *pointer2[i] << endl;
	}

	return 0;

}