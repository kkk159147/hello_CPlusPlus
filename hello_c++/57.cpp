#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "���� ����";
	string str2 = "���";
	string str3 = "�߱�";

	string info = "";

	info = str1;
	info.append("�� ");
	info += str2;
	info.append("�� ");
	info += str3;
	info.append("�� �����ߴ�.");

	cout << info << endl;


	return 0;
}