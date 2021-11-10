#include <bits/stdc++.h>
using namespace std;

pair<int,int> pairs[110];

bool compare(pair<int,int> f,pair<int,int> s){
	if(f.first == s.first){
		return f.second < s.second;
	}else{
		return f.first > s.first;
	}
}

string arr[110];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < 2*n;i++){
		pairs[i] = {0,i};
	}
	for(int i = 0;i < 2*n;i++){
		cin >> arr[i];
	}
	
	for(int i = 0;i < m;i++){
		for(int j = 1;j < n*2;j+=2){
			if(arr[pairs[j].second][i] == 'G'){
				if(arr[pairs[j-1].second][i] == 'C'){
					pairs[j].first++;
				}else if(arr[pairs[j-1].second][i] == 'G'){
					continue;
				}else{
					pairs[j-1].first++;
				}
			}else if(arr[pairs[j].second][i] == 'C'){
				if(arr[pairs[j-1].second][i] == 'C'){
					continue;
				}else if(arr[pairs[j-1].second][i] == 'G'){
					pairs[j-1].first++;
				}else{
					pairs[j].first++;
				}
			}else{
				if(arr[pairs[j-1].second][i] == 'C'){
					pairs[j-1].first++;
				}else if(arr[pairs[j-1].second][i] == 'G'){
					pairs[j].first++;
				}else{
					continue;
				}
			}
		}
		sort(pairs,pairs+(2*n),compare);
	}
	for(int i = 0;i < 2*n;i++){
		cout << pairs[i].second+1 << endl;
	}
}
