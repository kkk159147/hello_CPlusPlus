#include <iostream>
#include <string>

using namespace std;

struct Info
{
	string country;

	struct Who
	{
		string name;
		string nickname;

	} who;

};

int main()
{
	Info chuck = { "고려", {"척준경", "소드마스터"} };
	Info anjang = { "고구려", {"고홍안", "한주 사랑"} };

	cout << chuck.country << chuck.who.name << chuck.who.nickname << endl;
	cout << anjang.country << anjang.who.name << anjang.who.nickname << endl;


	return 0;

}