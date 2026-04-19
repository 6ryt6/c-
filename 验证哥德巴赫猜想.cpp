//编写程序验证哥德巴赫猜想：一个不小于4的偶数，可以表示为两个素数之和，如6=3+3,8=3+5,10=3+7，……。在主函数中输入一个不小于4的偶数n//
#include<iostream>
#include<string>
using namespace std;

bool sushu(int a);
int main()
{
	string input;
	int n;
	cout << "请输入一个不小于4的偶数：" << endl;
	cin >> input;
	int e = 0;
	while (e < input.size())
	{
		if (input[e] == '.')
		{
			cout << "error!" << endl;
			return 0;
		}
		e++;
	}
	n = stoi(input);
	if (n < 4|| n%2!=0)
	{
		cout << "error!";
		return 0;
	}
	int i, j;
	for (i = 1; i <= n/2; i++)
	{
		int j = n - i;
		if (sushu(i) && sushu(j))
		{
			cout << n<<"=" << i << "+" << j << endl;
		}
	}
}

bool sushu(int a)
{
	int r;
	if (a < 2)
	{
		return false;
	}
	for (r = 2; r < a; r++)
	{
		if (a % r == 0)
		{
			return false;
		}
	}
	return true;
}