#include <bits/stdc++.h>
using namespace std;

//Too slow
int arr[36],arr2[36];

bool check(){
	for(int i = 0;i <= 26;i++){
		if(arr[i] != arr2[i]){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b;
	cin >> a >> b;
	for(int i = 0;i < a.size();i++){
		arr[a[i]-'a']++;
	}
	if(a.size() > b.size()){
		cout << "0" << endl;
		return 0;
	}
	string curr = "";
	for(int i = 0;i < a.size();i++){
		arr2[b[i]-'a']++;
		curr += b[i];
	}
	int ans = 0;
	map<size_t,bool> p;
	for(int i = a.size();i <= b.size();i++){
		if(check()){
			hash<string> hasher;
			size_t temp = hasher(curr);
			if(!p[temp]){
				p[temp] = true;
				ans++;
			}
		}
		if(i < b.size()){
			arr2[b[i-a.size()]-'a']--;
			curr.erase(curr.begin());
			arr2[b[i]-'a']++;
			curr += b[i];
		}
	}
	cout << ans << endl;
}
