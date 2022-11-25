#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main()
{
	//locale::global(locale("Korean"));
	
	ifstream read;

	read.open("txt/93.txt", ifstream::in);
	
	char line = read.get();

	while (!read.eof())
	{
		cout << line;

		line = read.get();
	}

	cout << endl;
	
	read.close();

	return 0;

}