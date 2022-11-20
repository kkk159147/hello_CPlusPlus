#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "i like coding";

	str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());

	cout << str1 << endl;

	return 0;
}