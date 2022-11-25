#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	cout << fs::current_path() << endl;

	return 0;
}

