#include <bits/stdc++.h>
using namespace std;

map<char,int> moveback;

int main(){
	moveback['a'] = 0;
	moveback['b'] = 1;
	moveback['c'] = 2;
	int n,q;
	cin >> n >> q;
	string a;
	cin >> a;
	int cnt = 0;
	for(int i = 0;i < n-2;i++){
		if(a[i] == 'a' && a[i+1] == 'b' && a[i+2] == 'c'){
			cnt++;
		}
	}
	while(q--){
		int f;
		char s;
		cin >> f >> s;
		f--;
		if(a[f] == s){
			cout << cnt << endl;
		}else{
			int apos = moveback[a[f]];
			if(f-apos >= 0 && f-apos+2 < n && a[f-apos] == 'a' && a[f-apos+1] == 'b' && a[f-apos+2] == 'c'){
				cnt--;
			}
			a[f] = s;
			apos = moveback[a[f]];
			if(f-apos >= 0 && f-apos+2 < n && a[f-apos] == 'a' && a[f-apos+1] == 'b' && a[f-apos+2] == 'c'){
				cnt++;
			}
			cout << cnt << endl;
		}
	}
}
