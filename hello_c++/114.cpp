#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Info {
public:
	Info() {};
	
	string name_;
	int year_;
};

class King : public Info {
public:
	King(const string country) : country_(country) {};
	void Display() {
		cout << country_ << " " << name_ << " , " << year_;
	}

private:
	string country_;
};

class King2 : public Info {
public:
	King2(const string country) : country_(country) {};
	void Display() {
		cout << country_ << " " << name_ << " , " << year_;
	}

private:
	string country_;
};

int main()
{
	King king1("°íÁ¶¼±");
	king1.name_ = "´Ü±º ¿Õ°Ë";
	king1.year_ = 2333;

	King2 king2("°í·Á");
	king2.name_ = "ÃæÇý¿Õ";
	king2.year_ = 1330;

	king1.Display();
	king2.Display();

	return 0;

}