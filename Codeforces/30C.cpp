#include <bits/stdc++.h>
using namespace std;

struct target{
	int x,y,t;
	double p;
}targets[1010];

bool compare(target a,target b){
	return a.t < b.t;
}

double dp[1010];

double dist(target a, target b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(){
	int n;
	cin >> n;
	cout << fixed << setprecision(10);
	int a,b,c;
	double d;
	for(int i = 0;i < n;i++){
		cin >> a >> b >> c >> d;
		targets[i] = {a,b,c,d};
	}
	sort(targets,targets+n,compare);
	for(int i = 0;i < n;i++){
		dp[i] = targets[i].p;
	}
	double ans = targets[0].p;
	for(int i = 1;i < n;i++){
		for(int j = 0;j < i;j++){
			if(dist(targets[i],targets[j]) <= targets[i].t-targets[j].t){
				dp[i] = max(dp[i],dp[j]+targets[i].p);
			}
		}
		ans = max(ans,dp[i]);
	}
	cout << ans << endl;
}
