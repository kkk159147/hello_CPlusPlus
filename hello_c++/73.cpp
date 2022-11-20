#include <iostream>

using namespace std;

extern int g_num = 100;

int Func1() {
	return g_num++;
}

int Func2() {
	return g_num++;
}

int main()
{
	int num = g_num++;

	cout << num << endl;
	cout << Func1() << endl;
	cout << Func2() << endl;
	cout << g_num << endl;

	return 0;
}