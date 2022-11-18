#include <iostream>

using namespace std;


namespace silla
{
    int year = 935;
    
    void CentralArea() {
        cout << "경상도" << endl;
    }
}

namespace baekjae
{
    int year = 660;

    void CentralArea() {
        cout << "충청도" << endl;
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