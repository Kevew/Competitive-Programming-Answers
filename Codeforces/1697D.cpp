#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	string ans = "";
	long long prev = -1;
	map<char,long long> lastpos;
	for(long long i = 0;i < n;i++){
		cout << "? 2 1 " << i+1 << endl;
		long long curr;
		cin >> curr;
		if(curr != prev){
			cout << "? 1 " << i+1 << endl;
			char newchar;
			cin >> newchar;
			ans += newchar;
			prev = curr;
			lastpos[newchar] = i;
		}else{
			long long newtotal = curr;
			vector<long long> positions;
			for(auto test: lastpos){
				positions.push_back(test.second);
			}
			sort(positions.begin(),positions.end());
			positions.push_back(positions[positions.size()-1]+1);
			sort(positions.begin(),positions.end());
			int l = 0,r = positions.size();
			while(l < r){
				int mid = l+(r-l+1)/2;
				cout << "? 2 " << positions[mid]+1 << " " << i+1 << endl;
				int temp;
				cin >> temp;
				if(temp == newtotal-mid){
					l = mid;
				}else{
					r = mid-1;
				}
			}
			ans += ans[positions[l]];
			lastpos[ans[positions[l]]] = i;
		}
	}
	cout << "! " << ans << endl;
}
//adada
