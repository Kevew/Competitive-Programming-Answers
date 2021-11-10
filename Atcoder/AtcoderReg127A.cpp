#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;
	cin >> n;
	long long ans = 0;
	long long curr = 0,add = 1;
	for(int i = 0;i < n.size()-1;i++){
		curr += add;
		add *= 10;
		ans += curr;
	}
	add *= 2;
	long long currn = stoll(n);
	if(currn >= add){
		add /= 2;
		curr += add;
		ans += curr;
	}else{
		add /= 2;
		int temp = currn-add;
		add/=10;
		string a = to_string(temp);
		ans += temp;
		for(int i = 0;i < a.size();i++){
			temp = stoll(a);
			if(temp >= add*2){
				
			}
			
			a[i] = '0';
		}
	}
	cout << ans << endl;
}
/*
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
*/
