#include <bits/stdc++.h>
using namespace std;

int arr[300010];

int main(){
	int n,k;
	cin >> n >> k;
	int p1,p2,p3,p4,p5,p6;
	cout << "and 1 2" << endl;
	cin >> p1;
	cout << "or 1 2" << endl;
	cin >> p2;
	cout << "and 1 3" << endl;
	cin >> p3;
	cout << "or 1 3" << endl;
	cin >> p4;
	cout << "and 2 3" << endl;
	cin >> p5;
	cout << "or 2 3" << endl;
	cin >> p6;
	int temp = (p1|p3)|((p2|p4)^p6);
	arr[0] = temp;
	arr[1] = (p1|(arr[0]^p2));
	arr[2] = (p3|(arr[0]^p4));
	for(int i = 0;i < n-3;i++){
		cout << "and " << i+3 << " " << i+4 << endl;
		cin >> p1;
		cout << "or " << i+3 << " " << i+4 << endl;
		cin >> p2;
		arr[i+3] = (p1|(arr[i+2]^p2));
	}
	sort(arr,arr+n);
	cout << "finish " << arr[k-1] << endl;
}


/*
111000 1 and 2
111011 1 or 2

110010 1 and 3
111011 1 or 3

110000 2 and 3
111010 2 or 3

(111000)or(110010)=111010

(and or and) | ((or or)xor or)
*/


