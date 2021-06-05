#include <bits/stdc++.h>
using namespace std;

using ll  = long long;

int a[200010];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		int temp;
		vector<int> cost1,cost2;
		for(int i = 0;i < n;i++){
			cin >> temp;
			if(temp == 1){
				cost1.push_back(a[i]);
			}else{
				cost2.push_back(a[i]);
			}
		}
		sort(cost1.begin(),cost1.end(),greater<int>());
		sort(cost2.begin(),cost2.end(),greater<int>());
		ll currMemory = 0;
		int cost = 0;
		int i = -1;
		int ans = 2000000010;
		
		while(i+1 < cost2.size() && currMemory < m){
			i++;
			currMemory += cost2[i];
			cost+=2;
		}
		if(currMemory >= m){
			ans = min(ans,cost);
		}
		int j = i;
		for(i = 0;i < cost1.size();i++){
			currMemory += cost1[i];
			cost++;
			while(j >= 0 && currMemory-cost2[j] >= m){
				currMemory -= cost2[j];
				j--;
				cost -= 2;
			}
			if(currMemory >= m){
				ans = min(ans,cost);
			}
		}
		if(ans == 2000000010){
			cout << "-1"  << endl;
		}else{
			cout << ans << endl;
		}
	}
}
