#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	int as = 0,bs = 0;
	vector<char> ans;
	for(int i = 0;i < n;i++){
		if(a[i] == 'A'){
			as++;
		}else if(a[i] == 'B'){
			bs++;
		}else{
			for(int j = 0;j < as;j++){
				ans.push_back('A');
			}
			for(int j = 0;j < bs/2;j++){
				ans.push_back('A');
			}
			if(bs%2 == 1){
				ans.push_back('B');
			}
			ans.push_back(a[i]);
			as = 0;
			bs = 0;
		}
	}
	if(as != 0 || bs != 0){
		for(int j = 0;j < as;j++){
			ans.push_back('A');
		}
		for(int j = 0;j < bs/2;j++){
			ans.push_back('A');
		}
		if(bs%2 == 1){
			ans.push_back('B');
		}
	}
	for(int i = 0;i < ans.size();i++){
		cout << ans[i];
	}
	cout << endl;
}
