#include <iostream>
#include <string>

using namespace std;

class TmpClass {
public:
	TmpClass() : num1(10), num2(20), name("���ڸ��") {};

	void Print() {
		cout << num1 << " , " << num2 << " , " << name << endl;
	}

private:
	int num1 = 1;
	int num2 = 2;
	string name = "�����";
};

int main()
{
	TmpClass tc;
	tc.Print();

	return 0;
}

