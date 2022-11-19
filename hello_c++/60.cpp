#include <iostream>
#include <vector>


using namespace std;

int main()
{
	string sentence = "i like conding";
	string str2 = move(sentence);

	cout << sentence << endl;
	cout << str2 << endl;

	vector<int> v1 = { 1, 2, 3 };
	vector<int> v2 = move(v1);

	cout << v1.size() << endl;
	cout << v2.size() << endl;



	return 0;
}