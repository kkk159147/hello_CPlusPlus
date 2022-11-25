#include <iostream>
#include <string>

using namespace std;

class Class1 {
public:
	Class1() = default;

	int num;
	double prime;
	string word;
};

class Class2 {
public:
	Class2() {};

	int num;
	double prime;
	string word;
};
int main()
{
	Class1* class1 = new Class1();
	Class2* class2 = new Class2();

	cout << class1->num << " , " << class1->prime << " , " << class1->word << endl;
	cout << class2->num << " , " << class2->prime << " , " << class2->word << endl;

	return 0;
}

