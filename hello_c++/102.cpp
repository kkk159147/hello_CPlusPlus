#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream stream;
	stream.open("C:\\BOOTNXT");

	if (stream.good())
	{
		cout << "파일이 존재함" << endl;
	}
	else {
		cout << "파일이 없습니다." << endl;
	}
	stream.close();

	return 0;
}

