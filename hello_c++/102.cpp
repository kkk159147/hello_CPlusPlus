#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream;
	stream.open("C:\\BOOTNXT");

	if (stream.good())
	{
		cout << "������ ������" << endl;
	}
	else {
		cout << "������ �����ϴ�." << endl;
	}
	stream.close();

	return 0;
}

