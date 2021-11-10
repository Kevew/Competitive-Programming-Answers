#include<bits/stdc++.h>
using namespace std;

int main(){
	int t = 0;
	cin >> t;
	while(t--){
		int N,mn=INT_MAX,cnt=0;
		cin >> N;
		int a[N];
		for(int i=0;i<N;i++){
			cin >> a[i];
			mn=min(a[i],mn);
		}
		for(int i=0;i<N;i++){
			if(a[i]==mn){
				cnt++;
			}
		}
		cout<<N-cnt<<"\n";
	}
}

