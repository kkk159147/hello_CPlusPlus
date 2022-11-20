#include <iostream>
#include <vector>
#include <string>

using namespace std;
int PointerFunc(vector<string> *info) {
	if (info -> empty())
	{
		return 0;
	}
	else {
		return sizeof(info);
	}
}

int main()
{
	vector<string> message;
	message.push_back("고려 장군");
	message.push_back("");
	message.push_back("천준경!");
	message.push_back("절친 이름");
	message.push_back("... 무엇일까");

	cout << "포인터 인자 크기 : " << PointerFunc(&message) << endl;
	cout << "원 크기: " << sizeof(message) << endl;

	return 0;
}
