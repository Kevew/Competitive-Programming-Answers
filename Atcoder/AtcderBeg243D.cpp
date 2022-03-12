#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	string a;
	cin >> a;
	string ans = "";
	for(int i = 0;i < n;i++){
		bool check = false;
		while(i < n && a[i] == 'U' && !ans.empty() && (ans.back() == 'L' || ans.back() == 'R')){
			i++;
			ans.pop_back();
			check = true;
		}
		if(i < n){
			ans += a[i];
		}
	}
	for(int i = 0;i < ans.size();i++){
		if(ans[i] == 'U'){
			k /= 2;
		}else if(ans[i] == 'L'){
			k *= 2;
		}else{
			k *= 2;
			k++;
		}
	}
	cout << k << endl;
}
