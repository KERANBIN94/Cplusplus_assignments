#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f;
    cout << "�����뻪���¶ȣ�";
    cin >> f;
    double c = (f - 32) * 5 / 9;
    cout << fixed << setprecision(2) << "�����¶�Ϊ��" << c << endl;
    return 0;
}