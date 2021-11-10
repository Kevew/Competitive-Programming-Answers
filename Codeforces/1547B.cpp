#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	char curr = 'a';
	auto l = a.find(curr);
	
	bool fail = false;
	if(l != std::string::npos){
		int currl = l-1;
		int currr = l+1;
		curr++;
		while(curr <= 'z'){
			if(currl == -1 && currr == a.size()){
				break;
			}
			if(currl >= 0 && a[currl] == curr){
				currl--;
				curr++;
				continue;
			}
			if(currr < a.size() && a[currr] == curr){
				currr++;
				curr++;
				continue;
			}
			fail = true;
			break;
		}
	}else{
		fail = true;
	}
	if(fail){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
