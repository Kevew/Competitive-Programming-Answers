#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	long long curr = stoll(a);
	int n = a.size();
	string temp2 = string(n+1,'1');
	long long ans = stoll(temp2);
	if(curr <= 9){
		cout << curr << endl;
		return 0;
	}
	for(int i = 1;i <= 9;i++){
		for(int j = 0;j <= 9;j++){
			int diff = j-i;
			string current = "";
			current += '0'+i;
			current += '0'+j;
			for(int x = 2;x < n;x++){
				if(j+(x-1)*diff < 0 || j+(x-1)*diff > 9){
					break;
				}
				current += '0'+j+(x-1)*diff;
			}
			long long temp = stoll(current);
			if(temp >= curr){
				ans = min(ans,temp);
			}
		}
	}
	cout << ans << endl;
}
