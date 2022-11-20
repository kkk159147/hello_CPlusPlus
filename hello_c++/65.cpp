#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str1 = "gojoseon";
	string str2 = "AaBbCcDdEe";
	
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	
	cout << str1 << endl;
	cout << str2 << endl;

	return 0;

}