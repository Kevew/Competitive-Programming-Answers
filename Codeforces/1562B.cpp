#include <bits/stdc++.h>
using namespace std;

set<string> notprimes;

void setup(){
    int nsqrt = sqrt(1000000);
    vector<char> is_prime(nsqrt + 2, true);
    for (int i = 2;i <= nsqrt;i++) {
        if(is_prime[i]) {
            for (int j = i * i; j <= nsqrt; j += i){
            	is_prime[j] = false;
            	notprimes.insert(to_string(j));
			}
        }
    }
}

void solve(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int bestsize = 1e9;
	string ans;
	for(auto i: notprimes){
		int curr = 0;
		for(int j = 0;j < n && curr < i.size();j++){
			if(i[curr] == a[j]){
				curr++;
			}
		}
		if(curr == i.size() && bestsize > curr){
			bestsize = curr;
			ans = i;
		}
	}
	cout << ans.size() << endl;
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	setup();
	notprimes.insert("1");
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
