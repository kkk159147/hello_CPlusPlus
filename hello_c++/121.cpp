#include <iostream>

using namespace std;

class Base {
public:
	void Display() {
		cout << "예종" << endl;
	}
};

class Derived : Base {
public:
	void Display() {
		cout << "인종" << endl;
	}
};

int main()
{
	Derived child;
	child.Display();

	return 0;
}

