#include <iostream>
#include <string>

using namespace std;

class TempClass {
public:
	TempClass() {
		cout << "������" << endl;
	};

	~TempClass() {
		cout << "�Ҹ���" << endl;
	};

};

int main()
{
	TempClass *tc = new TempClass();
	
	delete tc;
	tc = nullptr;

	return 0;
}

