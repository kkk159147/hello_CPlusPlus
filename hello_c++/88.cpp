#include <iostream>
#include <string>

using namespace std;

struct Princess {
	string name;
	string father;
	string birthday = "�� �� ����";

} Goryeo[2];

int main()
{
	Princess jung;
	jung.name = "�������";
	jung.father = "����";
	jung.birthday = "1603�� 6�� 27��";

	Goryeo[0].name = "����Ȳ��";
	Goryeo[0].father = "����";

	Goryeo[1].name = "ȿ������";
	Goryeo[1].father = "����";

	cout << jung.name << endl;
	cout << jung.father << endl;
	cout << jung.birthday << endl;

	cout << Goryeo[0].name << endl;
	cout << Goryeo[0].father << endl;
	cout << Goryeo[0].birthday << endl;

	cout << Goryeo[1].name << endl;
	cout << Goryeo[1].father << endl;
	cout << Goryeo[1].birthday << endl;

	return 0;
}