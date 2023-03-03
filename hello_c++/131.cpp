#include <iostream>

using namespace std;

static class Calculator {
public:
	int Plus(const int x, const int y) {
		return x + y;
	}
} calc;

int main()
{
	cout << calc.Plus(1, 2) << endl;


	return 0;

}