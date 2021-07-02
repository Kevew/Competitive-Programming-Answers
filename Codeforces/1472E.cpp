#include <bits/stdc++.h>
using namespace std;

struct person{
	int h,w,index;
	bool operator<(const person &other) const{
		return h < other.h;
	}
};

void solve(){
	int n;
	cin >> n;
	vector<person> friends(n);
	for(int i = 0;i < n;i++){
		person &p = friends[i];
		cin >> p.h >> p.w;
		p.index = i;
		if(p.h > p.w){
			swap(p.h,p.w);
		}
	}
	sort(friends.begin(),friends.end());
	int curr = -1;
	int answer[n+1];
	memset(answer,-1,sizeof(answer));
	for(int i = 0,j = 0;i < n;i = j){
		while(j < n && friends[i].h == friends[j].h){
			j++;
		}
		for(int k = i;k < j;k++){
			if(curr >= 0 && friends[curr].w < friends[k].w){
				answer[friends[k].index] = friends[curr].index + 1;
			}
		}
		
		for(int k = i;k < j;k++){
			if(curr < 0 || friends[k].w < friends[curr].w){
				curr = k;
			}
		}
	}
	for(int i = 0;i < n;i++){
		cout << answer[i] << " ";
	}
	cout << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

