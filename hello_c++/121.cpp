#include <iostream>

using namespace std;

class Base {
public:
	void Display() {
		cout << "����" << endl;
	}
};

class Derived : Base {
public:
	void Display() {
		cout << "����" << endl;
	}
};

int main()
{
	Derived child;
	child.Display();

	return 0;
}

