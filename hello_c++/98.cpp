#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	if (fs::exists("c::\\Target"))
	{
		cout << "������ �����մϴ�." << endl;
	}
	else {
		cout << "������ ���������ʽ��ϴ�." << endl;
	}

	return 0;
}

