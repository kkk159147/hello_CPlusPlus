#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	int size = fs::file_size("txt/연개수영 전설.txt");

	cout << size << endl;


	return 0;
}

