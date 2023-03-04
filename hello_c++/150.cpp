#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
	tuple<int, string> data1(1, "def");
	tuple<int, string> data2(1, "abc");

	if (data1 > data2)
		cout << "data1 > data2" << endl;
	else
		cout << "data1 < data2" << endl;

	tuple<double, string> data3(1.0, "def");
	tuple<double, string, int> data4(3.0, "abc", 3);

	/*if (data3 > data4)
		cout << "data3 > data4" << endl;
	else
		cout << "data3 < data4" << endl;*/


	return 0;

}