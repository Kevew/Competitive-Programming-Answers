#include <bits/stdc++.h>
using namespace std;

char ft[27];
char sd[27];

int main(){
	string a,b;
	cin >> a >> b;
	int aast = 0,bast = 0;
	for(int i = 0;i < a.size();i++){
		if(a[i] == '*'){
			aast++;
		}else{
			ft[a[i]-'a']++;
		}
	}
	for(int i = 0;i < b.size();i++){
		if(b[i] == '*'){
			bast++;
		}else{
			sd[b[i]-'a']++;
		}
	}
	if(bast != 0 && aast != 0){
		int temp = min(aast,bast);
		aast -= temp;
		bast -= temp;
	}
	if(aast < bast){
		swap(aast,bast);
	}
	
	int difference = 0;
	for(int i = 0;i < 27;i++){
		difference += max(ft[i],sd[i])-min(ft[i],sd[i]);
	}
	if(difference - aast == 0){
		cout << "A" << endl;
	}else{
		cout << "N" << endl;
	}
}
