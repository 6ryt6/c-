#include<iostream>
using namespace std;

int fun(int num);
int main()
{
	int n;
	cout << "输入一个整数（输入0结束）！" << endl;
	cin >> n;
	while (n != 0)
	{
		int result;
		result = fun(n);
		cout << "各数字之积为：" << result << endl;
		cout << "输入一个整数（输入0结束）！" << endl;
		cin >> n;
	}
}
int fun(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if (num < 0)
	{
		num = -num;
	}
	int p = 1;
	while (num > 0)
	{
		int a = num % 10;
		p *= a;
		num = num / 10;
	}
	return p;
}