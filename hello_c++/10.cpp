#include <iostream>

using namespace std;

int main()
{
    const int arraySize = 3;

    int founding[arraySize] = {918, 1392, 1948};

    cout << "고려 건국 연도 : " << founding[0] << endl;
    cout << "조선 건국 연도 : " << founding[1] << endl;
    cout << "한국 건국 연도 : " << founding[2] << endl;

    return 0;
}