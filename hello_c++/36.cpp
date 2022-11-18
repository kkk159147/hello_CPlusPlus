#include <iostream>
#include <array>

using namespace std;

int main()
{
	int date[10] = { 5, 19, 76, 3, 10, 89, 54, 43, 2, 17 };

	for (int i = 0; i < sizeof(date) / sizeof(*date); i++)
	{
		if (date[i] % 2 == 0)
		{
			cout << date[i] << " : Â¦¼ö" << endl;
		}
		else {
			cout << date[i] << " : È¦¼ö" << endl;

		}
	}


	array<int, 10> date2 = { 10, 23, 1, 51, 1123, 4129, 12354, 1243, 12, 317 };
	for (int i = 0; i < date2.size(); i++)
	{
		if (date2[i] % 2 == 0)
		{
			cout << date2[i] << " : Â¦¼ö" << endl;
		}
		else {
			cout << date2[i] << " : È¦¼ö" << endl;

		}
	}

	return 0;

}