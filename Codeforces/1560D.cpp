#include <bits/stdc++.h>
using namespace std;

vector<string> check;
int sizecheck;

void solve(){
	string n;
	cin >> n;
	long long ans = 1e9;
	long long nsize = n.size();
	for(int i = 0; i < sizecheck;i++){
		long long curr = 0,addon = 0;
		long long j;
		for(j = 0;j < nsize;j++){
			if(n[j] == check[i][curr]){
				curr++;
				if(curr == check[i].size()){
					j++;
					break;
				}
			}else{
				addon++;
			}
		}
		long long temp = check[i].size();
	//	cout << addon << " " << temp << " " << curr << " " << j << " " << n << " " << check[i] << " " << addon+temp-curr+(nsize-j) << endl;
		ans = min(ans,addon+temp-curr+(nsize-j));
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long a = 1,i = 0;
	while(a <= 1e18){
		check.push_back(to_string(a));
		a *= 2;
		i++;
	}
	sizecheck = check.size();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
