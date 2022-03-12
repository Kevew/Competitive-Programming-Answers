#include <bits/stdc++.h>
using namespace std;

long long arr[100010];

void solve(){
	long long n;
	cin >> n;
	queue<pair<long long,long long>> even;
	queue<pair<long long,long long>> odd;
	for(long long i = 0;i < n;i++){
		cin >> arr[i];
		if(i != 0 && i != n-1){
			if(arr[i]%2 == 0){
				even.push({arr[i],i});
			}else{
				if(arr[i] == 1){
					odd.push({arr[i],i});
				}else{
					even.push({arr[i]-1,i});
					odd.push({1,i});
				}
			}
		}
	}
	long long ans = 0;
	while(!even.empty()){
		pair<long long,long long> temp = even.front();
		even.pop();
		ans += temp.first/2;
		while(temp.first >= 2 && !odd.empty()){
			temp.first -= 2;
			bool check = false,check2 = false;
			for(long long i = 0;i < 2;i++){
				if(!odd.empty()){
					pair<long long,long long> temp2 = odd.front();
					odd.pop();
					if(temp2.second == temp.second){
						odd.push({1,temp2.second});
						if(i == 0){
							check = true;
						}
						if(i == 1){
							check2 = true;
						}
					}else{
						even.push({2,n+1});
					}
				}
			}
			if(check && check2){
				break;
			}
		}
	}
	if(odd.empty()){
		cout << ans << endl;
	}else{
		cout << "-1" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}
