#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    cout << "������һ��������" << endl;
    cin >> a;


    double x = a;
    double e = 1e-5;
    int n = 0;
    while (true)
    {
        double x_next = (x + a / x) / 2;

        if (abs(x_next - x) < e)
        {
            break;
        }

        x = x_next;

        n++;
    }

    cout << a<<"��ƽ������:" << x  << endl;
    return 0;
}
