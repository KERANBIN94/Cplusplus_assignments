#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    cout << "������һ���ַ���";
    cin.getline(str, 100);
    int alpha = 0, space = 0, digit = 0, other = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i])) 
        {
            alpha++;
        }
        else if (isspace(str[i])) 
        {
            space++;
        }
        else if (isdigit(str[i])) 
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    cout << "Ӣ����ĸ�ĸ���Ϊ��" << alpha << endl;
    cout << "�ո�ĸ���Ϊ��" << space << endl;
    cout << "�����ַ��ĸ���Ϊ��" << digit << endl;
    cout << "�����ַ��ĸ���Ϊ��" << other << endl;
    return 0;
}

