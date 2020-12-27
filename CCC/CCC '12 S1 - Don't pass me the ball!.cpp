#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int sum = 0;
	for(int i = 1;i <= a-3;i++)
	{
		for(int j = i + 1;j <= a-2;j++)
		{
			for(int k = j + 1;k <= a-1;k++)
			{
				sum++;
			}
		}
	}
	cout << sum << endl;;
}

