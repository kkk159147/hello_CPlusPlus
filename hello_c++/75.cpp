#include <iostream>
#include <string>

using namespace std;

void Func1(int &arg) {
	cout << arg << endl;
	arg += 10;
	cout << arg << endl;

}

void Func2(string& info) {
	
	info += "981년";
}

int main()
{
	int year = 10;
	Func1(year);
	cout << year << endl;

	string info = "고려 성종 즉위년 : ";
	Func2(info);
	cout << info << endl;
	return 0;
}