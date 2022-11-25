#include <iostream>
#include <array>

using namespace std;

int main()
{
	int data[10] = { 5, 19, 76, 3, 10, 89, 54, 43, 2, 17 };

	for (int i = 0; i < sizeof(data) / sizeof(*data); i++)
	{
		if (data[i] % 2 == 0)
		{
			cout << data[i] << " : Â¦¼ö" << endl;
		}
		else {
			cout << data[i] << " : È¦¼ö" << endl;

		}
	}


	array<int, 10> data2 = { 10, 23, 1, 51, 1123, 4129, 12354, 1243, 12, 317 };
	for (int i = 0; i < data2.size(); i++)
	{
		if (data2[i] % 2 == 0)
		{
			cout << data2[i] << " : Â¦¼ö" << endl;
		}
		else {
			cout << data2[i] << " : È¦¼ö" << endl;

		}
	}

	return 0;

}