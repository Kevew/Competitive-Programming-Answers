#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	long long ans = (a*(a+1))/2;
	
	long long cnt = a/b;
	long long sum = (cnt*(cnt+1))/2;
	ans -= b*sum;
	
	cnt = a/c;
	sum = (cnt*(cnt+1))/2;
	ans -= c*sum;
	
	if(b > c){
		swap(b,c);
	}
	
	long long d = (b*c)/gcd(c,b);
	cnt = a/d;
	sum = (cnt*(cnt+1))/2;
	ans += d*sum;
	
	cout << ans << endl;
}
