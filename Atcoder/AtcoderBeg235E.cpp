#include <bits/stdc++.h>
using namespace std;

long long arr[200010];
long long sizearr[200010],costarr[200010];

long long anothersizearr[200010];

long long find(long long a){
	if(a == arr[a]){
		return a;
	}
	return arr[a] = find(arr[a]);
}

void unite(int a,int b){
	a = find(a);
	b = find(b);
	if(a != b){
		if(anothersizearr[a] < anothersizearr[b]){
			swap(a,b);
		}
		arr[b] = a;
		anothersizearr[a] += anothersizearr[b];
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n,m,q;
	cin >> n >> m >> q;
	for(long long i = 0;i < n;i++){
		arr[i] = i;
		costarr[i] = 1e9;
		anothersizearr[i] = 1;
	}
	vector<pair<long long,pair<long long,long long>>> edges;
	for(long long i = 0;i < m;i++){
		long long a,b,c;
		cin >> a >> b >> c;
		a--;
		b--;
		edges.push_back({c,{a,b}});
	}
	sort(edges.begin(),edges.end());
	for(auto i: edges){
		if(arr[i.second.first] != arr[i.second.second]){
			long long u = i.second.first,v = i.second.second;
			sizearr[u]++;
			sizearr[v]++;
			costarr[u] = min(costarr[u],i.first);
			costarr[v] = min(costarr[v],i.first);
			unite(u,v);
		}
	}
	for(long long i = 0;i < q;i++){
		long long a,b,c;
		cin >> a >> b >> c;
		a--;
		b--;
		if(n == 2){
			if(a != b && c < costarr[a]){
				cout << "Yes" << endl;
				continue;
			}
			cout << "No" << endl;
			continue;
		}
		if(sizearr[a] == 1){
			if(costarr[a] > c){
				cout << "Yes" << endl;
				continue;
			}
		}else if(sizearr[b] == 1){
			if(costarr[b] > c){
				cout << "Yes" << endl;
				continue;
			}
		}
		cout << "No" << endl;
	}
}
