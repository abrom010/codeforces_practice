#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin >> n >> k;

	int count = 0;
	int kScore;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;

		if(i<k-1) {
			if(x>0) count++;
			else break;
		} else if(i==k-1) {
			if(x>0) count++;
			else break;
			kScore = x;
		} else {
			if(x>0 && x>=kScore) count++;
			else break;
		}

	}
	cout << count;
}