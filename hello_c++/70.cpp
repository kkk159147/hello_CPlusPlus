#include <iostream>
#include <vector>
#include <string>

using namespace std;
int PointerFunc(vector<string> *info) {
	if (info -> empty())
	{
		return 0;
	}
	else {
		return sizeof(info);
	}
}

int main()
{
	vector<string> message;
	message.push_back("��� �屺");
	message.push_back("");
	message.push_back("õ�ذ�!");
	message.push_back("��ģ �̸�");
	message.push_back("... �����ϱ�");

	cout << "������ ���� ũ�� : " << PointerFunc(&message) << endl;
	cout << "�� ũ��: " << sizeof(message) << endl;

	return 0;
}
