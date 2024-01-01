#include <bits/stdc++.h>
using namespace std;

int main(){
  	int N, M;
  	cin >> N >> M;
  	vector<int> A(M), C(M);
  	for(int i = 0;i < M;i++){
  	  	cin >> A[i] >> C[i];
  	}
  	vector<pair<int,int>> P(M);
  	for(int i = 0;i < M;i++){
  	  	P[i] = make_pair(C[i], A[i]);
  	}
  	sort(P.begin(), P.end());
  	for(int i = 0;i < M;i++){
  	  	A[i] = P[i].second;
  	  	C[i] = P[i].first;
  	}
  	
    int g = N;
    
    long long ans = 0;
    for(int i = 0;i < M;i++){
    	long long newg = __gcd(g,A[i]);
    	ans += (long long) C[i] * (g-newg);
    	g = newg;
	}

  	if(g > 1){
  	  	cout << -1 << endl;
  	}else{
  	  	cout << ans << endl;
  	}
}
