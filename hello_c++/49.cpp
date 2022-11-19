#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0; i < 10; i++)
	{
		cout << rand() << endl;
	}

	return 0;

}