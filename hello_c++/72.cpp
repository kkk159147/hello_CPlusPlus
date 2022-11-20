#include <iostream>


using namespace std;
int Temp1(const int arg) {
	int num = 20;

	return num + 1;
}

int Temp2(const int arg) {
	int num = arg;

	return num + 1;
}

int main()
{
	int num = 100;

	int rtn1 = Temp1(num);
	int rtn2 = Temp2(num);

	cout << num << endl;
	cout << rtn1 << endl;
	cout << rtn2 << endl;
	
	return 0;

}