#include <iostream>

using namespace std;

int main()
{
	string sentence = "i conding";
	sentence.insert(2, "like ");
	cout << sentence << endl;

	sentence.insert(7, "or hate ");
	cout << sentence << endl;

	return 0;
}