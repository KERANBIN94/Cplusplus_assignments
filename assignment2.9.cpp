#include <iostream>
using namespace std;

int main()
{
    double p = 0.8;
    int n = 2;
    int N = 2;
    double all = p * 2;
    int d = 1;
    while (true)
    {
        n = n * 2;
        if (n > 100)
        {
            break;
        }
        N += n;
        all += p * n;
        d++;
    }
    double average = all / d;
    cout << "�ܹ����� " << N << " ��ƻ�������� " << all << " Ԫ��ƽ��ÿ�컨�� " << average << " Ԫ" << endl;
    return 0;
}
