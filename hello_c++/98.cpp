#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	if (fs::exists("c::\\Target"))
	{
		cout << "폴더가 존재합니다." << endl;
	}
	else {
		cout << "폴더가 존재하지않습니다." << endl;
	}

	return 0;
}

