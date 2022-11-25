#include <iostream>
#include <fstream> 
#include <string> 

using namespace std;

int main()
{
	ifstream read;

	read.open("txt/93.txt", ifstream::in);

	string line;

	while(getline(read, line))
	{
		cout << line << endl;
	}

	read.close();

	return 0;
}