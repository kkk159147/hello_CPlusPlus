#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	fs::copy("txt/�������� ����.txt", "txt/�������� ����_����.txt");
	fs::remove("txt/�������� ����.txt");

	return 0;
}

