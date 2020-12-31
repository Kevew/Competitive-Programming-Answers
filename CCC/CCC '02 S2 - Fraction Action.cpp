#include <bits/stdc++.h>
using namespace std;

void primefactors(int n,int arr[]){
   while(n%2 == 0){
      arr[2]++;
      n = n/2;
   }
   for(int i = 3; i <= sqrt(n); i = i+2){
      while(n % i == 0){
         arr[i]++;
         n = n/i;
      }
   }
   if(n > 2)
		arr[n]++;
}

int main(){
	int a,b;
	cin >> a >> b;
	int temp = a/b;
	if(a == 0){
		cout << "0" << endl;
		return 0;
	}
	if(temp != 0){
		cout << temp << " ";
	}
	
	a -= temp*b;
	if(a == 0){
		return 0;
	}
	
	int arr1[1010];
	int arr2[1010];
	memset(arr1,0,sizeof(arr1));
	memset(arr2,0,sizeof(arr2));
	primefactors(a,arr1);
	primefactors(b,arr2);
	int divide = 1;
	for(int i = 0;i < 1010;i++){
		if(min(arr1[i],arr2[i]) > 0){
			divide *= min(arr1[i],arr2[i])*i;
		}
	}
	cout << a/divide << "/" << b/divide << endl;
}
