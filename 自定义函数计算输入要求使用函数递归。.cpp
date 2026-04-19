//自定义函数计算1！+3！+5！+……+(2*n-1)！，其中n的值从键盘输入，要求使用函数递归。//
#include<iostream>
#include<string>
using namespace std;

long long sum(int n);
long long r(int n);

int main()
{
	string input;
	long long result;
	int n;
	cout << "请输入一个正整数：" << endl;
	cin >> input; 
	int i = 0;
	while (i < input.size())
	{
		if (input[i] == '.')
		{
			cout << "error!" << endl;
			return 0;
		}
		i++;
	}
	n = stoi(input);
	if (n < 0)
	{
		cout << "error!" << endl;
		return 0;
	}
	else
	{
		result = sum(n);
		cout << result << endl;
		return 0;
	}
}
long long sum(int n)
{
	long long s = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		s += r(2 * i - 1);
	}
	return s;
}
long long r(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return n * r(n - 1);
}