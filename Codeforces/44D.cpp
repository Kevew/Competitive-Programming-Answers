#include <bits/stdc++.h>
using namespace std;

struct planetloc{
	int x,y,z;
};

planetloc arr[5010];

double dist(planetloc a, planetloc b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}

int main(){
	cout << fixed << setprecision(10) << endl;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> arr[i].x >> arr[i].y >> arr[i].z;
	}
	double ans = INT_MAX;
	for(int i = 1;i < n;i++){
		for(int j = i+1;j < n;j++){
			ans = min(ans,dist(arr[0],arr[i])+dist(arr[0],arr[j])+dist(arr[j],arr[i]));
		}
	}
	cout << ans/2 << endl;
}
