#include <iostream>

using namespace std;

//Not-A



class Landload {
public:
	void ILandload() {
		cout << "�ǹ���" << endl;
	}
};

class MaleMonkey {
public:
	void Favorite() {
		cout << "Favorite : Famale Monkey" << endl;
	}
};

class Nation : public Landload {
public:
	void Who() {
		cout << "�ȳ��ϼ��� ";

		ILandload();
	}
};

int main()
{
	Nation nation;
	
	nation.Who();

	return 0;

}