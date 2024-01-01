#include <bits/stdc++.h>
using namespace std;

vector<string> T;
vector<string> S;

void dfs(int cur, int remain, string ans){
	
	if(remain<0)return;
	
	if(cur == S.size()){
		if(ans.size()>=3&&!binary_search(T.begin(),T.end(),ans)){
			cout<<ans<<endl;
			exit(0);
		}
		return;
	}
	
	if(ans.size()>0 && ans.back()!='_'){
		dfs(cur,remain,ans + "_");
	}
	else{
		dfs(cur+1,remain,ans + S[cur]);
		if(ans.size()>0)dfs(cur,remain-1,ans + "_");
	}
	
}

int main(){
	int N,M;
	cin>> N >> M;
	
	string a;
	for(int i = 0;i < N;i++){
		cin >> a;
		S.push_back(a);
	}
	sort(S.begin(),S.end());
	
	for(int i = 0;i < M;i++){
		cin >> a;
		T.push_back(a);
	}
	sort(T.begin(),T.end());
	
	int remain = 16;
	for(int i = 0;i < N;i++){
		remain -= S[i].size();
	}
	remain -= N - 1;
	
	do{
		dfs(0, remain, "");
	}
	while(next_permutation(S.begin(),S.end()));
	
	cout << -1 << endl;
	
	return 0;
}
