#include <bits/stdc++.h>
using namespace std;

// no, 3221225477 for some reason

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> people;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            people.push_back(a);
        }
        sort(people.begin(), people.end());
        int ans = -1;
        for(int s = 2; s < 101; s++){
            int a = 0; int b = n-1;
            int res = 0;
            while(a < b){
                if(people[a] + people[b] == s){
                    res++; a++; b--;
                }
                if(people[a] + people[b] > s) b--;
                if(people[a] + people[b] < s) a++;
            }
            ans = max(ans, res);
        }
        cout << ans << endl;
    }
}
