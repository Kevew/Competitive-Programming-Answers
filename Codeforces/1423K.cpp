#include<bits/stdc++.h>
using namespace std;
 
const int N = 1000005;
int p[N],s[N],t,n;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(int i=2;i<=1000000;i++)
	{
		if(!p[i])
			for(int j=i+i;j<=1000000;j+=i)
				p[j]=1;
		s[i]=s[i-1]+1-p[i];
	}
	cin >> t;
	while(t--)
	{
		cin >> n;
		int x = sqrt(n+0.5);
		cout << s[n]-s[x]+1 << endl;;
	}
	return 0;
}
