#include <iostream>


using namespace std;
//Has-A

class Rent {
public:
	void Payment() { cout << "�Ӵ�Ḧ �޽��ϴ�." << endl; }
};

class Landload : public Rent {
public:
	void GetMoney() {
		cout << "�ǹ��ִ� ";
		Payment();
	}
};

int main()
{
	Landload land;
	land.GetMoney();


	return 0;

}