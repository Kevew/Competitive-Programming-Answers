#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
    cin >> s;
    bool ans = true;
    for(int i = 0;i < s.size();i++){
        if(i%2 == 0){
            if(!islower(s[i])) ans=false;
        }else{
            if(!isupper(s[i])) ans=false;
        }
    }
    if(ans){
    	cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
