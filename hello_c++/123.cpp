#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	int size = fs::file_size("txt/�������� ����.txt");

	cout << size << endl;


	return 0;
}

