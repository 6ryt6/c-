#include<iostream>
#include<cmath>
using namespace std;

double fun(double n);
int main()
{
	double n;
	cout << "请输入一个数（1~6）："<<endl;
	cin >> n;
	if (n >= 6 || n < 0)
	{
		cout << "error!";
		return 0;
	}
	else
	{
		double result;
		result = fun(n);
		cout << result << endl;
		return 0;
	}
	return 0;
}

double fun(double n)
{
	double s;
	if (n < 2)
	{
		s = 2.5 - n;
	}
	else if (n < 4)
	{
		s = 2 - 1.5 * pow(n - 3, 2);
	}
	else
	{
		s = n / 2 - 1.5;
	}
	return s;
}