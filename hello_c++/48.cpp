#include <iostream>

using namespace std;

int main()
{
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div);

	cout << div << " , " << mod << endl;

	return 0;

}