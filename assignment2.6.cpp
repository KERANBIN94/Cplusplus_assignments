#include <iostream>
using namespace std;

int zdgys(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a + b;
}

int zxgbs(int a, int b)
{
    return a * b / zdgys(a, b);
}

int main()
{
    int a, b;

    cout << "������������������";
    cin >> a >> b;
    int y = zdgys(a, b);
    int x = zxgbs(a, b);
    cout << a << " �� " << b << " �����Լ��Ϊ��" << y << endl;
    cout << a << " �� " << b << " ����С������Ϊ��" << x << endl;
    return 0;
}
