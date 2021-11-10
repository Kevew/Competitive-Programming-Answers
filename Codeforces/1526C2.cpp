#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	priority_queue<long long, vector<long long>, greater<long long> > pq;
	long long curr = 0;
	
	for(long long i = 1;i <= n;i++){
		long long x; cin >> x;
		curr += x;
		pq.push(x);
		
		while(curr < 0){
			curr -= pq.top();
			pq.pop();
		}
	}
	cout << pq.size() << endl;
}
