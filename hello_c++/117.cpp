#include <iostream>

using namespace std;

//Not-A



class Landload {
public:
	void ILandload() {
		cout << "건물주" << endl;
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
		cout << "안녕하세요 ";

		ILandload();
	}
};

int main()
{
	Nation nation;
	
	nation.Who();

	return 0;

}