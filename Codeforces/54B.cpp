#include<bits/stdc++.h>
using namespace std;

string board[30];
int n,m;

string func(int x1,int y1,int x2,int y2){
	int x=x2-x1,y=y2-y1;
	string ans = "z",t;
	t = "";
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			t+=board[x1+i][y1+j];
	ans = min(ans,t);
	t = "";
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			t+=board[x2-1-i][y2-1-j];
	ans = min(ans,t);
	if(x!=y)
		return ans;
	t = "";
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			t+=board[x2-1-j][y1+i];
	ans = min(ans,t);
	t = "";
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			t+=board[x1+j][y2-1-i];
	ans=min(ans,t);
	return ans;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>board[i];
	set<string> st;
	int ans=0,ansx=30,ansy=30;
	for(int x=1;x<=n;x++){
		if(n%x==0){
			for(int y=1;y<=m;y++){
				if(m%y==0){
					st.clear();
					for(int i=0;i<(n/x);i++){
						for(int j=0;j<(m/y);j++){
							st.insert(func(i*x,j*y,i*x+x,j*y+y));
						}
					}
					//cout << ansx << " " << ansy << endl;
					if(st.size()==(n/x)*(m/y)){
						ans++;
						if(x*y<ansx*ansy || x*y==ansx*ansy && x<ansx){
							ansx = x;
							ansy = y;
						}
					}
				}
			}
		}
	}
	cout << ans << endl << ansx << " " << ansy << endl;
	return 0;
}
