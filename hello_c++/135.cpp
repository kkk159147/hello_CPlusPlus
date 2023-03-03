#include <iostream>


using namespace std;
//Has-A

class Rent {
public:
	void Payment() { cout << "임대료를 받습니다." << endl; }
};

class Landload : public Rent {
public:
	void GetMoney() {
		cout << "건물주는 ";
		Payment();
	}
};

int main()
{
	Landload land;
	land.GetMoney();


	return 0;

}