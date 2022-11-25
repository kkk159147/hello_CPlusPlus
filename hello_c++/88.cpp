#include <iostream>
#include <string>

using namespace std;

struct Princess {
	string name;
	string father;
	string birthday = "알 수 없음";

} Goryeo[2];

int main()
{
	Princess jung;
	jung.name = "정명공주";
	jung.father = "선조";
	jung.birthday = "1603년 6월 27일";

	Goryeo[0].name = "선정황후";
	Goryeo[0].father = "성종";

	Goryeo[1].name = "효정공주";
	Goryeo[1].father = "현종";

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