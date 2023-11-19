#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char Q;
    cout << "��������������һ���������";
    cin >> a >> b >> Q;
    double result;
    bool valid = true;
    switch (Q)
    {
    case '+': 
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/': 
        if (b == 0)
        {
            cout << "��������Ϊ0" << endl;
            valid = false;
        }
        else
        {
            result = a / b;
        }
        break;
    case '%': 
        if (b == 0)
        {
            cout << "��������Ϊ0" << endl;
            valid = false;
        }
        else
        {
            result = int(a) % int(b);
        }
        break;
    default:
        cout << "��������Ϸ�" << endl;
        valid = false;
        break;
    }
    if (valid)
    {
        cout << a << " " << Q << " " << b << " = " << result << endl;
    }
    return 0;
}
