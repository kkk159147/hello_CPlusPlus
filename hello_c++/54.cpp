#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	string war = "���չ� ���� : ���� ���� �ο�â�� �ϱ���� ������ ����";

	int rtn = war.find("�ο�â");

	if (rtn > 0)
	{
		cout << "����, ��ġ�� : " << rtn << endl;
	}
	else {
		cout << "����" << endl;
	}
	
	return 0;
}