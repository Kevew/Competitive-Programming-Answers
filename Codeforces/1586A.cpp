#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[110];
bool prime[200010];

void solve(){
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 0;i < n;i++){
		cin >> arr[i].first;
		arr[i].second = i;
		sum += arr[i].first;
	}
	if(!prime[sum]){
		cout << n << endl;
		for(int i = 0;i < n;i++){
			cout << i+1 << " ";
		}
		cout << endl;
		return;
	}
	sort(arr,arr+n);
	for(int i = 0;i < n;i++){
		sum -= arr[i].first;
		if(!prime[sum]){
			cout << n-1 << endl;
			for(int j = 0;j < n;j++){
				if(j != arr[i].first){
					cout << j+1 << " ";
				}
			}
			cout << endl;
			return;
		}
		sum += arr[i].first;
	}
	
}

int main(){
    for(int i = 2;i <= 20000;i++){
    	for(int j = 2;j*j <= i;j++){
            if(i%j == 0){
            	break;
			}else if(j+1 > sqrt(i)){
                prime[i] = true;
    		}
    	}
	}
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

