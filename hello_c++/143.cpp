#include <iostream>

using namespace std;

int main()
{
	auto data1 = 1;
	decltype(data1) data2 = 2;

	auto data3 = 3.4;
	decltype(data3) data4 = 3;

	cout << data1 << " , " << typeid(data1).name() << endl;
	cout << data2 << " , " << typeid(data2).name() << endl;
	cout << data3 << " , " << typeid(data3).name() << endl;
	cout << data4 << " , " << typeid(data4).name() << endl;


	return 0;
}