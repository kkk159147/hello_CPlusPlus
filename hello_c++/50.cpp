#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	string str1 = "1a2b3c4d5e6f7g8h9i";
	string str2 = "repubilc of korea";
	int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	srand(static_cast<unsigned int>(time(NULL)));

	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	random_shuffle(data, data + 10);

	for (auto i : str1)
	{
		cout << i << ", ";
	}

	cout << endl << endl;


	for (auto i : str2)
	{
		cout << i << ", ";
	}
	cout << endl << endl;

	for (auto i : data)
	{
		cout << i << ", ";
	}

	return 0;
}
