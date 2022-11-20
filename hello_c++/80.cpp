#include <iostream>
#include <vector>


using namespace std;

enum Status {
	normal = 0,
	abnormal,
	discoonect = 100,
	close
};

enum class Status2 : char {
	normal = 'n',
	abnormal,
	discoonect = 100,
	close
};

int main()
{
	Status2 num2 = Status2::abnormal;

	if (num2 == Status2::normal)
	{
		cout << "normal" << endl;
	}
	else if (num2 == Status2::abnormal) {
		cout << "abnormal" << endl;
	}
	else if (num2 == Status2::abnormal) {
		cout << "discoonect" << endl;
	}
	else if (num2 == (Status2)101) {
		cout << "close" << endl;
	}

	cout << static_cast<int>(num2) << endl << static_cast<char>(num2) << endl;

	return 0;
}