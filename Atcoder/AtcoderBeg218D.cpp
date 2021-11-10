#include <bits/stdc++.h>
using namespace std;

bool check(vector<pair<int,int>> v, pair<int,int> check){
	int l = 0,r = v.size()-1;
	while(l <= r){
		int mid = (l+r)/2;
		if(v[mid].first > check.first){
			r = mid-1;
		}else if(v[mid].first < check.first){
			l = mid+1;
		}else{
			if(v[mid].second > check.second){
				r = mid-1;
			}else if(v[mid].second < check.second){
				l = mid+1;
			}else{
				return true;
			}
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n;
	cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
    	cin >> v[i].first >> v[i].second;
	}
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		if(v[i].first < v[j].first && v[i].second < v[j].second){
        		if(check(v, make_pair(v[i].first, v[j].second)) && 
				   check(v, make_pair(v[j].first, v[i].second))){
        			ans++;
				}
   			}
		}
	}
    cout << ans << endl;
}
