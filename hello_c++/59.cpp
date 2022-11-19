#include <iostream>

using namespace std;

int main()
{
	string sentence = "i hate conding";
	sentence.erase(0, 7);
	cout << sentence << endl;

	return 0;
}