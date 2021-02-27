#include <bits/stdc++.h>
using namespace std;

vector<string> suffixarr;

int check(int i){
	int leng = min(suffixarr[i].size(),suffixarr[i-1].size());
	for(int j = 0;j < leng;j++){
		if(suffixarr[i][j] != suffixarr[i-1][j]){
			return j;
		}
	}
	return leng;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		for(int i = 0;i < a.size();i++){
			suffixarr.push_back(a.substr(i,a.size()-i));
		}
		sort(suffixarr.begin(),suffixarr.end());
		
		int count = suffixarr[0].size()+1;
		for(int i = 1;i < a.size();i++){
			int temp = check(i);
			count += suffixarr[i].size()-temp;
		}
		cout << count << endl;
		suffixarr.clear();
	}
}	
