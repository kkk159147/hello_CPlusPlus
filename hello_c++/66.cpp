#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str1 = "gfedcba";
	
	reverse(str1.begin(), str1.end());

	cout << str1 << endl;

	return 0;

}