#include <bits/stdc++.h>
using namespace std;

map<int,int> cnt;

int main(){
	int n;
	cin >> n;
	set<int> currarr;
	int a;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(a == 1){
			int b;
			cin >> b;
			currarr.insert(b);
			cnt[b]++;
		}else if(a == 2){
			int b,c;
			cin >> b >> c;
			if(cnt[b] > c){
				cnt[b] -= c;
			}else{
				cnt[b] = 0;
				currarr.erase(b);
			}
		}else{
			cout << (*currarr.rbegin())-(*currarr.begin()) << endl;
		}
	}
}
