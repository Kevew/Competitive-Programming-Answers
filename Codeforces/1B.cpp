#include <bits/stdc++.h>
using namespace std;

//Lots of unnessacry code, could be optimized easily

void recur(int n){
	if(n){
		recur((n-1)/26);
		putchar('A'+(n-1)%26);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		bool start = false;
		for(int i = 1;i < n.size();i++){
			if(n[i-1] < 64 && n[i] > 64){
				start = true;
				break;
			}
		}
		if(start){
			string n1 = "",n2 = "";
			int i = 1;
			while(n[i] < 64){
				n1 += n[i];
				i++;
			}
			i++;
			while(i < n.size()){
				n2 += n[i];
				i++;
			}
			recur(stoi(n2));
			cout << n1 << endl;
		}else{
			int startpoint = 0;
			for(int i = 0;i < n.size();i++){
				if(n[i] < 64){
					startpoint = i-1;
					break;
				}
			}
			long long ans = 0;
			for(int i = n.size()-(n.size()-startpoint);i >= 0;i--){
				ans += (n[i]-'A'+1)*pow(26,(n.size()-(n.size()-startpoint)-i));
			}
			cout << "R";
			for(int i = startpoint+1;i < n.size();i++){
				cout << n[i];
			}
			
			cout << "C" << ans << endl;
		}
	}
}
