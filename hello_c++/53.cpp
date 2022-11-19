#include <iostream>

using namespace std;

int main()
{
	string st1 = "1";
	string st2 = "2";

	if (st1.compare(st2))
	{
		cout << "같은 문장" << endl;
	}else{
		cout << "다른 문장" << endl;
	}



	return 0;
}