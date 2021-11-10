#include <bits/stdc++.h>
using namespace std;

int arr[100010];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int sum = 0,mx = 0,cnt = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		sum += arr[i];
		cnt = max(cnt+arr[i],0);
		mx = max(mx,cnt);
	}
	cout << 2*mx-sum << endl;
	
}
