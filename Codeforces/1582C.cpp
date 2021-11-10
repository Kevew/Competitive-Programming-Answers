#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
	long long low = 0;
	long long high = str.length() - 1;
	while(low < high){
		if(str[low] != str[high]){
			return false;
		}
		low++;
		high--;
	}
	return true;
}

long long check(string s,long long temp,char curr) {
    long long low = 0;
	long long high = s.size()-1;
	while(low < high){
		while(s[low] == curr && s[low] == s[high] && low < high){
			temp -= 2;
			low++,high--;
		}
		while(s[low] != s[high] && low < high){
			if(s[low] == curr){
				low++;
			}else{
				high--;
			}
		}
		if(low < high){
			low++;
			high--;
		}
	}
	if(low == high && s[low] == curr){
		temp--;
	}
	return temp;
}

void solve(){
	long long n;
	cin >> n;
	string a;
	cin >> a;
	long long ans = 1e18;
	for(char i = 'a';i <= 'z';i++){
		string str = a;
		str.erase(remove(str.begin(),str.end(),i),str.end());
		if(isPalindrome(str)){
			long long temp = (a.size())-(str.size());
			ans = min(ans,check(a,temp,i));
		}
	}
	if(ans == 1e18){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin >> t;
	while(t--){
		solve();
	}
}

