#include <iostream>

using namespace std;


class Temp {
	int to;
	bool is_on;
};

int main()
{
	cout << sizeof('p') << endl;
	cout << sizeof(10) << endl;
	cout << sizeof(10.0) << endl;
	cout << sizeof(Temp) << endl;
	cout << "byte" << endl;

	return 0;

}