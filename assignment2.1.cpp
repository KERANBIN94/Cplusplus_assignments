#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char zifu;
    cout << "������һ���ַ���";
    cin >> zifu;
    if (islower(zifu))
    {
        zifu = toupper(zifu);
        cout << "��д��ĸΪ��" << zifu << endl;
    }
    else
    {
        int ascii = zifu + 1;
        cout << "����ַ���ASCII��ֵΪ��" << ascii << endl;
    }
    return 0;
}
