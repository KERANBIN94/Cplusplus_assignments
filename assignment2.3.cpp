#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "�����������ε������ߣ�";
    cin >> a >> b >> c;
    if (a + b > c && a - b < c && b + c > a && b - c < a && c + a > b && c - a < b)
    {
        int C = a + b + c;
        cout << "�����ε��ܳ�Ϊ��" << C << endl;
        if (a == b || b == c || c == a)
        {
            cout << "���������ǵ���������" << endl;
        }
        else
        {
            cout << "�������β��ǵ���������" << endl;
        }
    }
    else
    {
        cout << "�޷�����������" << endl;
    }
    return 0;
}
