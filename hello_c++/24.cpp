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
		cout << "������ ����" << endl;
	}
	else {
		cout << "������ �����ʴ�" << endl;
	}

	if (x >= y)
	{
		cout << "x�� ũ�ų� ����" << endl;
	}
	else {
		cout << "x��  ����" << endl;
	}

	if (x <= 20)
	{
		cout << "x�� 20���� �۰ų� ����" << endl;
	}
	else {
		cout << "x��  ŭ" << endl;
	}
	return 0;
}