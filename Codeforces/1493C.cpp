#include <bits/stdc++.h>
#define N 200005
using namespace std;
using ll = long long;
 
void solve() {
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	if(n%k!=0){
		cout << "-1" << endl;
		return;
	}
	
	int cnt[26],total = 0;
	memset(cnt,0,sizeof(cnt));
	for(int i = 0;i < n;i++){
		cnt[s[i]-'a']++;
	}
	for(int i = 0;i < 26;i++){
		total += (k-(cnt[i]%k))%k;
	}
	if(total == 0){
		cout << s << endl;
		return;
	}
	
	for(int i = n-1;i >= 0;i--){
		cnt[s[i]-'a']--;
		for(int j = s[i]-'a'+1;j < 26;j++){
			cnt[j]++,s[i] = j+'a';
			total = 0;
			for(int i = 0;i < 26;i++){
				total += (k-(cnt[i]%k))%k;
			}
			
			if(total <= n-i-1){
				int t = n-1;
				for(int l = 25;l >= 0;l--){
					cnt[l] = (k-(cnt[l]%k))%k;
					if(cnt[l] == 0){
						continue;
					}
					while(cnt[l]--){
						s[t--] = l+'a';
					}
				}
				while(t > i){
					s[t--] = 'a';
				}
				cout << s << endl;
				return;
			}
			
			cnt[j]--;
		}
	}
	
	cout << "-1" << endl;
}
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int t; cin>>t;
	while (t--) solve();
}
