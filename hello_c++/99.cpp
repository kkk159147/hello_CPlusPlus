#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	string directory = "C:\\Program Files";

	for (auto& name : fs::directory_iterator(directory))
	{
		std::cout << name << '\n';
	}

	return 0;
}

