#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "조선 세종";
	string str2 = "고기";
	string str3 = "야근";

	string info = "";

	info = str1;
	info.append("은 ");
	info += str2;
	info.append("와 ");
	info += str3;
	info.append("을 좋아했다.");

	cout << info << endl;


	return 0;
}