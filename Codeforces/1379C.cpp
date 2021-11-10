#include<iostream>
#include<algorithm>
using namespace std;

struct point{
	int x,y;
};

inline bool operator<(point a,point b){
	return a.x>b.x;
}

inline point make(int x){
	point t;
	t.x=x,t.y=0;
	return t;
}

point a[100010];
long long s[100010];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>a[i].x>>a[i].y;
		}
		sort(a+1,a+m+1);
		for(int i=1;i<=m;i++){
			s[i]=s[i-1]+a[i].x;
		}
		long long ans=s[min(n,m)];
		for(int i=1;i<=m;i++){
			int t=lower_bound(a+1,a+m+1,make(a[i].y))-a-1;
			if(t<i)
			{
				if(t<n-1)
					ans=max(ans,s[t]+a[i].x+(long long)(n-t-1)*a[i].y);
			}
			else
			{
				if(t<n)
					ans=max(ans,s[t]+(long long)(n-t)*a[i].y);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
