#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	KingInfo() {
		value_ = "성종";
	};

	KingInfo(const string value) {
		value_ = value;
	};

	KingInfo(const int value) {
		value_ = "연산군 즉위 년도 : ";
		value_ += to_string(value);
	};

	string GetNmae() const {
		return value_;
	}

private:
	string value_;
};
int main()
{
	KingInfo info1;
	KingInfo info2("조선 연산군");
	KingInfo info3(1494);

	cout << info1.GetNmae() << endl;
	cout << info2.GetNmae() << endl;
	cout << info3.GetNmae() << endl;

	return 0;
}

