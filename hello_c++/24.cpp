#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1 = "s1";
	string s2 = "s2";

	int x = 10;
	int y = 10;
	   

	if (s1.compare(s2) && s1 == s2)
	{
		cout << "문장이 같다" << endl;
	}
	else {
		cout << "문장이 같지않다" << endl;
	}

	if (x >= y)
	{
		cout << "x가 크거나 같음" << endl;
	}
	else {
		cout << "x가  작음" << endl;
	}

	if (x <= 20)
	{
		cout << "x가 20보다 작거나 같음" << endl;
	}
	else {
		cout << "x가  큼" << endl;
	}
	return 0;
}