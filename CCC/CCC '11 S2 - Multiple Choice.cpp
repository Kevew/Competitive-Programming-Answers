#include <bits/stdc++.h>
using namespace std;

char arr[10010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >> a;
	for(int i = 0;i < a;i++){
		cin >> arr[i];
	}
	char temp;
	int ans = 0;
	for(int i = 0;i < a;i++){
		cin >> temp;
		if(temp == arr[i]){
			ans++;
		}
	}
	cout << ans << endl;
}
