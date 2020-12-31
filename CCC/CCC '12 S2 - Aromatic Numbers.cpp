#include <bits/stdc++.h>
using namespace std;

map<char,pair<int,int>> arr;

int main(){
	arr['I'] = make_pair(1,1);
	arr['V'] = make_pair(2,5);
	arr['X'] = make_pair(3,10);
	arr['L'] = make_pair(4,50);
	arr['C'] = make_pair(5,100);
	arr['D'] = make_pair(6,500);
	arr['M'] = make_pair(7,1000);
	
	string a;
	cin >> a;
	int ans = 0;
	for(int i = 0;i < a.size()/2;i++){
		if(i == (a.size()/2)-1){
			ans += (a[a.size()-2]-'0')*(arr[a[a.size()-1]].second);
		}else{
			if(arr[a[i*2+1]].first < arr[a[(i+1)*2+1]].first){
				ans -= (a[i*2]-'0')*(arr[a[(i*2)+1]].second);
			}else{
				ans += (a[i*2]-'0')*(arr[a[(i*2)+1]].second);
			}
		}
	}
	cout << ans << endl;
}
