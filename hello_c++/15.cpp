#include <iostream>

using namespace std;

int x = 10;

int Func1() {
    int y = x + 10;
    return y;
}
int Func2() {
    int x = 100;
    return x;
}

int main()
{
    cout << Func1() << endl;
    cout << Func2() << endl;

    return 0;
}