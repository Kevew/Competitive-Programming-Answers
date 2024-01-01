#include <bits/stdc++.h>
using namespace std;

bool arr[110];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		string a;
		cin >> a;
		for(int j = 0;j < m;j++){
			if(a[j] == 'x'){
				arr[j] = true;
			}
		}
	}
	int ans = 0;
	int curr = 0;
	for(int i = 0;i < m;i++){
		if(arr[i]){
			curr = 0;
		}else{
			curr++;
			ans = max(ans,curr);
		}
	}
	cout << ans << endl;
}
