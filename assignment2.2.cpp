#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int x, y;
	cout << "������x��ֵ��" << endl;
	cin >> x;
	if (0<x<1)
	{
		y = 3 - 2 * x;
		cout << "y��ֵΪ��" << y << endl;
	}
	else if(1<=x && x<5)
	{
		y = 2 / (4 * x) + 1;
		cout << "y��ֵΪ��" << y << endl;
	}
	else if(5<=x && x<10)
	{
		y = x * x;
		cout << "y��ֵΪ��" << y << endl;
	}
	else
	{
		cout << "xֵ���ڷ�Χ�ڡ�" << endl;
	}
	return 0;
}