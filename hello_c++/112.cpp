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
			cout << "�߸��� ����" << endl;
		}
	}

	string GetValue() const {
		if (!value_.empty())
		{
			return value_;
		}
		else {
			return "������ ���� ���ּ���";
		}
	}

private:
	string value_;
	int num_;

};

int main()
{
	KingInfo info;
	info.SetValue("����");

	KingInfo info2;
	info2.SetValue("����");

	cout << info.GetValue() << endl;
	cout << info2.GetValue() << endl;

	return 0;

}