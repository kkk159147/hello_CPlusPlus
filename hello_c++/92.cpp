#include <iostream>
#include <string>

using namespace std;

struct Info
{
	string country;

	struct Who
	{
		string name;
		string nickname;

	} who;

};

int main()
{
	Info chuck = { "����", {"ô�ذ�", "�ҵ帶����"} };
	Info anjang = { "������", {"��ȫ��", "���� ���"} };

	cout << chuck.country << chuck.who.name << chuck.who.nickname << endl;
	cout << anjang.country << anjang.who.name << anjang.who.nickname << endl;


	return 0;

}