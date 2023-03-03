#include <iostream>

using namespace std;

//Is-A

class Tenant {
public:
	void ITenant() {
		cout << "세입자";
	}
};

class Landload {
public:
	void ILandload() {
		cout << "건물주";
	}
};

class Nation : public Tenant, public Landload {
public :
	void Who() {
		cout << "저는 ";

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