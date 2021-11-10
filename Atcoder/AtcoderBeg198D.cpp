#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<char> s;
    string a,b,c;
    cin >> a >> b >> c;
    for(char ch : a) s.insert(ch);
    for(char ch : b) s.insert(ch);
    for(char ch : c) s.insert(ch);
    if((int) s.size() > 10) {
        cout << "UNSOLVABLE\n";
        return 0;
    }
    vector<char> chars;
    for (char ch : s){
    	chars.push_back(ch);
	}
    int perm[11] = {0,1,2,3,4,5,6,7,8,9};
    do{
        map<char,int> m;
        for (int i = 0; i < (int) chars.size(); ++i) m[chars[i]] = perm[i];
        if(m[a[0]] > 0 and m[b[0]] > 0 and m[c[0]] > 0) {
            int64_t x = 0,y = 0,z = 0;
            for(char ch : a) x = x * 10 + m[ch];
            for(char ch : b) y = y * 10 + m[ch];
            for(char ch : c) z = z * 10 + m[ch];
            if(x + y == z){
                cout << x << "\n" << y << "\n" << z << "\n";
                return 0;
        	}
        }
    }while(next_permutation(perm,perm+10));
    cout << "UNSOLVABLE\n";
}
