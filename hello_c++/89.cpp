#include <iostream>
#include <string>

using namespace std;


struct Princess {
	string name;
	string father;
	string birthday = "�� �� ����";

} jungso;

void Print(Princess* who) {
	cout << who -> name << endl;
	cout << who -> father << endl;
	cout << who -> birthday << endl;
}

int main()
{
	jungso.name = "���Ұ���";
	jungso.father = "����";
	jungso.birthday = "1412��";

	Print(&jungso);

	return 0;

}