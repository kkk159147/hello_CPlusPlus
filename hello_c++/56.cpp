#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string str1 = "divided into the Three Kingdoms";
	string str2 = "Yi Seong-gye, established Joseon";

	char ch = 'c';
	char ch2 = 'B';

	transform(str1.begin(), str1.end(), str1.begin(), toupper);
	transform(str2.begin(), str2.end(), str2.begin(), tolower);

	ch = toupper(ch);
	ch2 = tolower(ch2);

	cout << str1 << endl;
	cout << str2 << endl;
	cout << ch << endl;
	cout << ch2 << endl;

	return 0;
}