#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	void SetName(string name) {
		name_ = name;
	}
	string GetNmae() {
		return name_;
	}

private:
	string name_;
};
int main()
{
	KingInfo info;
	info.SetName("¼¼Á¶");

	cout << info.GetNmae() << endl;

	return 0;
}

