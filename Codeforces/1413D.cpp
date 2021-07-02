#include <bits/stdc++.h>
using namespace std;

long long arr[100010],f[100010],ans[100010];

long long main(){
	long long n,temp;
	cin >> n;
	long long placed = 0,curr = 0;
	char a;
	for(long long i = 0;i < n*2;i++){
		cin >> a;
		if(a == '+'){
			arr[++placed] = ++curr;
		}else{
			cin >> temp;
			if(placed > 0){
				if(temp < f[arr[placed]]){
					cout << "NO" << endl;
					return 0;
				}
				ans[arr[placed]] = temp;
				placed--;
				f[arr[placed]] = max(f[arr[placed]],max(f[arr[placed+1]],temp));
			}else{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	for(long long i = 1;i <= n;i++){
		cout << ans[i] << " ";
	}
}

