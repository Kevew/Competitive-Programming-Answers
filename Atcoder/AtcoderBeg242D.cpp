#include <bits/stdc++.h>
using namespace std;

long long change[3][2] = {{1,2},{2,0},{0,1}};

int main(){
	string a;
	cin >> a;
	long long q;
	cin >> q;
	for(long long i = 0;i < q;i++){
		long long t,k;
		cin >> t >> k;
		stack<long long> s;
		while(t > 0){
			s.push((k+1)%2);
			k = (k+1)/2;
			t--;
		}
		k--;
		while(!s.empty()){
			long long temp = s.top();
			s.pop();
			k = change[k][temp];
		}
		char ans = 'A'+k;
		cout << ans << endl;
	}
}

//ABC
//BCCAAB
//CAABABBCBCCA
