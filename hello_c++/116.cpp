#include <iostream>

using namespace std;

//Is-A

class Tenant {
public:
	void ITenant() {
		cout << "������";
	}
};

class Landload {
public:
	void ILandload() {
		cout << "�ǹ���";
	}
};

class Nation : public Tenant, public Landload {
public :
	void Who() {
		cout << "���� ";

		if (is_landload)
		{
			ILandload();
		}
		else {
			ITenant();
		}
	}
	
	bool is_landload = false;
};

int main()
{
	Nation nation;
	nation.is_landload = false;

	nation.Who();


	return 0;

}