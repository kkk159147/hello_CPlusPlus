#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream ifs("txt/���ѽô� ���� �±�� ����.txt");

	stringstream ss;

	ss << ifs.rdbuf();
	ifs.close();

	string read = "";

	while (!ss.eof())
	{
		ss >> read;
		cout << read << " ";
	}

	cout << endl;
	read = ss.str();

	cout << endl << read << endl;


	return 0;
}