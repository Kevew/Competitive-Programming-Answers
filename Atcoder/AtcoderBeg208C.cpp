#include <bits/stdc++.h>
using namespace std;

int arr[200010],sorted[200010];
map<int,bool> give;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,k;
	cin >> n >> k;
	long long curr = k/n;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		sorted[i] = arr[i];
	}
	sort(sorted,sorted+n);
	for(int i = 0;i < k-(curr*n);i++){
		give[sorted[i]] = true;
	}
	
	for(int i = 0;i < n;i++){
		if(give[arr[i]]){
			cout << curr+1 << endl;
		}else{
			cout << curr << endl;
		}
	}
}
