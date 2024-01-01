#include <bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node *arr[2];
};

node *newNode(){
	node *temp = new node;
	temp->value = 0;
	temp->arr[0] = NULL;
	temp->arr[1] = NULL;
	return temp;
}

void insert(node *root, int curr){
	node *temp = root;
	for(int i = 9;i >= 0;i--){
		bool val = curr&(1 << i);
		
		if(temp->arr[val] == NULL){
			temp->arr[val] = newNode();
		}
		
		temp = temp->arr[val];
	}
	temp->value = curr;
}

int find_max(node *root, int curr){
	node *temp = root;
	for(int i = 9;i >= 0;i--){
		bool val = curr&(1<<i);
		
		if(temp->arr[1-val] != NULL){
			temp = temp->arr[1-val];
		}else if(temp->arr[val] != NULL){
			temp = temp->arr[val];
		}
	}
	return curr^(temp->value);
}

int solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	
	node *root = newNode();
	insert(root, 0);
	int result = 0, curr = 0;
	for(int i = 0;i < n;i++){
		curr = curr ^ arr[i];
		insert(root, curr);
		
		result = max(result, find_max(root, curr));
	}
	cout << result << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}



/*


0000 - 0
0001 - 1
0010 - 2
0011 - 3
0100 - 4
0101 - 5

0 2 5 1

0 2 5 1 1
0 2 5 1 4
0 2 5 1 6

x xor y = z
x xor y xor z = 0
0 2 5 1 4 0 4

Find subarray with greatest xor

Trie

*/
