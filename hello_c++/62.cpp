#include <iostream>

using namespace std;

int main()
{
	string str1 = "i like coding";

	string find_str = "coding";
	string replace_str = "history";

	str1.replace(str1.find(find_str), str1.length(), replace_str);
	
	cout << str1 << endl;

	return 0;

}