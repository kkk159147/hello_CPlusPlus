#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	KingInfo() {};

	void SetValue(const string name, const string son, int ascend) {
		name_ = name;
		son_ = son;
		ascend_ = ascend;
	}

	string GetNameSon() const {
		return name_ + "�� �Ƶ� : " + son_;
	}
	string GetAscend() const {
		return name_ + "�����⵵ : " + to_string(ascend_);
	}

private:
	string name_;
	string son_;
	int ascend_;
};

int main()
{	
	KingInfo info;
	info.SetValue("����", "���ر�", 1567);

	cout << info.GetNameSon() << endl;
	cout << info.GetAscend() << endl;
	

	return 0;
}