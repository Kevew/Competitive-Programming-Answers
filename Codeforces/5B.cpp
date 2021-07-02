#include<bits/stdc++.h>
using namespace std;

string s,a[1005];
int n,m,d;

int main()
{
	int t = 6;
	while(getline(cin,s)){
		a[n++] = s;
		m = max(m,(int)s.size());
	}
	for(int i = 0;i < m + 2;i++)
	{
		cout << "*";
	}
	cout << endl;
	d = 0;
	for(int i = 0;i < n;i++){
		int k = m-a[i].size();
		cout << '*';
		for(int j = 0;j < (k+d)/2;j++){
			cout<<' ';
		}
		cout << a[i];
		for(int j=(k+d)/2;j < k;j++){
			cout << ' ';
		}
		cout << '*';
		cout << '\n';
		if(k&1) d=1-d;
	}
	for(int i=0;i<m+2;i++){
		cout << "*";
	}
	return 0;
}
