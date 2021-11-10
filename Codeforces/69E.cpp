#include <bits/stdc++.h>
using namespace std;

int n, k, a[100005], i, j;

set<int> s;
map<int, int> x;
set<int>::iterator it;

int main()
{
	cin >> n >> k;
	for(i=1; i<=n; i++) {
		cin>>a[i];
		if(x[a[i]]==0){
			s.insert(a[i]);
		}else{
			s.erase(a[i]);
		}
		x[a[i]]++;
		if(i>k){
			if(x[a[i-k]]==1){
				s.erase(a[i-k]);
			}
			x[a[i-k]]--;
			if(x[a[i-k]]==1){
				s.insert(a[i-k]);
			}
		}
		if(i>=k){
			if(s.size()==0) cout<<"Nothing"<<endl;
			else cout<<*s.rbegin()<<endl;
		}
	}
}

