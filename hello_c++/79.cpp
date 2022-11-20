#include <iostream>

using namespace std;

enum class Status {
	normal = 0,
	abnormal,
	discoonect = 100,
	close
};

enum Status2 {
	normal = 0,
	abnormal,
	discoonect = 100,
	close
};

int main()
{
	Status num = Status::close;
	Status2 num2 = Status2::abnormal;

	if (num == Status::normal)
	{
		cout << "normal" << endl;
	}
	else if(num == Status::abnormal){
		cout << "abnormal" << endl;
	}
	else if (num == Status::abnormal) {
		cout << "discoonect" << endl;
	}
	else if (num == (Status)101) {
		cout << "close" << endl;
	}

	if (num2 == Status2::normal)
	{
		cout << "normal" << endl;
	}
	else if (num2 == Status2::abnormal) {
		cout << "abnormal" << endl;
	}
	else if (num2 == abnormal) {
		cout << "discoonect" << endl;
	}
	else if (num2 == 101) {
		cout << "close" << endl;
	}

	return 0;
}