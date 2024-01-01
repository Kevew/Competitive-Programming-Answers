#include <bits/stdc++.h>
using namespace std;

vector<pair<long long,pair<long long,long long>>> pos;
bool vis[220];

long long n;

void check(long long position,long long power){
	if(!vis[position]){
	//	cout << position << " " << power << endl;
		vis[position] = true;
		for(long long i = 0;i < n;i++){
			if(i != position){
				if(power*pos[position].second.second >= abs(pos[position].first-pos[i].first) + abs(pos[position].second.first-pos[i].second.first)){
					check(i,power);
				}
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(long long i = 0;i < n;i++){
		long long x,y,P;
		cin >> x >> y >> P;
		pos.push_back(make_pair(x,make_pair(y,P)));
	}
	long long ans = 5e9;
	for(long long i = 0;i < n;i++){
		long long l = 0,r = 5e9;
		while(l < r){
			long long mid = l + (r-l+1)/2;
			for(long long j = 0;j < n;j++){
				vis[j] = false;
			}
			check(i,mid);
			bool success = true;
			for(long long j = 0;j < n;j++){
				if(vis[j] == false){
					success = false;
					break;
				}
			}
			if(!success){
				l = mid;
			}else{
				r = mid-1;
			}
		}
		ans = min(ans,l);
	}
	cout << ans+1 << endl;
}
