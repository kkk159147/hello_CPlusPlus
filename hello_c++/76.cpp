#include <iostream>

using namespace std;

void Func1(bool *is_on) {
	cout << sizeof(is_on) << endl;
}

void Func2(bool &is_on) {
	cout << sizeof(is_on) << endl;
}

int main()
{
	bool is_Temp = true;

	Func1(&is_Temp);
	Func2(is_Temp);

	return 0;
}