#include <iostream>
#include <string>

using namespace std;


struct Princess {
	string name;
	string father;
	string birthday = "알 수 없음";

} jungso;

void Print(Princess* who) {
	cout << who -> name << endl;
	cout << who -> father << endl;
	cout << who -> birthday << endl;
}

int main()
{
	jungso.name = "정소공주";
	jungso.father = "태종";
	jungso.birthday = "1412년";

	Print(&jungso);

	return 0;

}