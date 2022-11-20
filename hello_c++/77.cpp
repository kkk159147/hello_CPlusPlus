#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string kMyJop = "developer";

	string question = "who are you : ";
	string answer = "me job is ";

	cout << question << kMyJop << endl;
	cout << answer << kMyJop << endl;

	return 0;
}