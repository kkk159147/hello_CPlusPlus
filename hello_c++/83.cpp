#include <iostream>

using namespace std;

void Print1(int* arr) {
	cout << arr[0] << " , " << arr[1] << " , " << arr[2] << endl;

	arr[1] = 1000;
}

void Print2(int arr[]) {
	cout << arr[0] << " , " << arr[1] << " , " << arr[2] << endl;

	arr[2] = 2000;
}

int main()
{
	int data[3] = { 0,1,2 };

	Print1(data);
	Print2(data);

	cout << data[0] << " , " << data[1] << " , " << data[2] << endl;

}