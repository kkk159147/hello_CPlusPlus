#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	string war = "백합벌 전투 : 백제 왕자 부여창의 일기토로 유명한 전쟁";

	int rtn = war.find("부여창");

	if (rtn > 0)
	{
		cout << "있음, 위치는 : " << rtn << endl;
	}
	else {
		cout << "없음" << endl;
	}
	
	return 0;
}