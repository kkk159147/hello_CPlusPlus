#include <iostream>

using namespace std;


namespace silla
{
    int year = 935;
    
    void CentralArea() {
        cout << "���" << endl;
    }
}

namespace baekjae
{
    int year = 660;

    void CentralArea() {
        cout << "��û��" << endl;
    }
}

using namespace silla;
using namespace baekjae;

int main()
{
    cout << silla::year << endl;
    silla::CentralArea();
    cout << baekjae::year << endl;
    baekjae::CentralArea();

    return 0;
}