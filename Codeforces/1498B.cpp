#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,w;
		cin >> n >> w;
		multiset<int> s;
		for(int i=0,x;i<n;i++){
			cin >> x;
			s.insert(x);
		}
		for(int ans = 1;;ans++){
			int last=w;
			while(last > 0){
				set<int>::iterator p=s.upper_bound(last);
				if(p == s.begin()){
					break;
				}
				p--;
				last -= *p;
				s.erase(p);
			}
			if(!s.size()){
				cout<<ans<<"\n";
				break;
			}
		}
	}
}

