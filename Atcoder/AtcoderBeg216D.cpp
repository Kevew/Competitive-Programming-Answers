#include<bits/stdc++.h>
using namespace std;
 
int cnt[200005];
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
        
    vector<int> v[m+n],stk[n+m];
    queue<int> q;
    for(int i = 0;i < m;i++){
        int k;
        cin >> k;
        for(int j = 0;j < k;j++){
            int q;
            cin >> q;
            v[i].push_back(q); 
            stk[q].push_back(i);
		}
        reverse(v[i].begin(),v[i].end());
        if(++cnt[v[i].back()]==2){
        	q.push(v[i].back());
		}
    }
    int ans = 0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        ans++;
        for(auto c:stk[x]){
            v[c].pop_back();
            if(v[c].size()){
                if(++cnt[v[c].back()]==2){
                	q.push(v[c].back());
				}
            }
        }
    }
        
    if(ans == n){
       	cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
