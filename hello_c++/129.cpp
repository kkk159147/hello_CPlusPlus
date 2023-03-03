#include <iostream>
#include <string>

using namespace std;

class TempClass {
public:
	TempClass() {
		cout << "持失切" << endl;
	};

	~TempClass() {
		cout << "社瑚切" << endl;
	};

};

int main()
{
	TempClass *tc = new TempClass();
	
	delete tc;
	tc = nullptr;

	return 0;
}

