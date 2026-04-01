#include<iostream>
using namespace std;

int main()
{
	int x1, y1, z1;
	int flog=0;
	int x3=0, y3=0, z3=0;
	int i;

	cout << "请分别输入甲，乙，丙最初的糖果数：" << endl;
	cin >> x1 >> y1 >> z1;
	if (x1 <= 0 || y1 <= 0 || z1 <= 0)
	{
		cout << "error!";
	}
	else
	{
		if (x1 < 3 || y1 < 3 || z1 < 3)
		{
			flog = 0;
		}
		else
		{
			for (i = 1;; i++)
			{
				int t1;
				t1 = x1 / 3;
				x3 += x1 % 3;
				x1 = t1;
				y1 += t1;
				z1 += t1;

				int t2;
				t2 = y1 / 3;
				y3 +=y1 % 3;
				y1 = t2;
				x1 += t2;
				z1 += t2;

				int t3;
				t3 = z1 / 3;
				z3 += z1 % 3;
				z1 = t3;
				x1 += t3;
				y1 += t3;

				flog++;

				if (x1 < 3 || y1 < 3 || z1 < 3)
				{
					break;
				}
			}
		}
		cout << "经过" << flog << "次后，甲.乙.丙分别吃了" << x3 <<" "<< y3 <<" " << z3 << "个糖果" << endl;
		cout << "甲.乙.丙分别剩下了" << x1<<" " << y1 <<" " << z1 << endl;
		cout << "你猜对了吗？";
	}
	return 0;
}