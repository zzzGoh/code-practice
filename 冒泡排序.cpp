#include<iostream>
using namespace std;
int main()
{
	int a[11];
	int i, j, t;
	cout << "输入10个数字" << endl;
	for (int i = 1; i < 11; i++)
		cin >> a[i];
	cout << endl;
	cout << a[i];
	for(int j=1;j<=9;j++)
		for(i=1;i<=10-j;i++)
			if(a[i]>a[i+1])
			{
				t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
			}
	cout << "排序后" << endl;
	for (i = 1; i < 11; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}