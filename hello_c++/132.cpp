#include <iostream>

using namespace std;

class KingInfo {
public:
	KingInfo() {}

	void SetValue(const string value) {
		if (!value.empty())
		{
			value_ = value;
		}
		else {
			cout << "잘못된 인자" << endl;
		}
	}

	string GetValue() const {
		if (!value_.empty())
		{
			return value_;
		}
		else {
			return "설정을 먼저 해주세요";
		}
	}

private:
	string value_;
	int num_;

};

int main()
{
	KingInfo info;
	info.SetValue("중종");

	KingInfo info2;
	info2.SetValue("인종");

	cout << info.GetValue() << endl;
	cout << info2.GetValue() << endl;

	return 0;

}