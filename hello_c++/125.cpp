#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	KingInfo() {
		name_ = "¼¼Á¾";
	};

public:
	string GetNmae() {
		return name_;
	}

private:
	string name_;
};
int main()
{
	KingInfo info;

	cout << info.GetNmae() << endl;

	return 0;
}

