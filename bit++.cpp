#include <bits/stdc++.h>
using namespace std;

int main() {
	int x = 0;
	int n;
	cin >> n;

	for(int i=0; i<n; i++) {
		string s;
		cin >> s;
		if(s[0]=='+' || s[1]=='+' || s[2]=='+')
			x++;
		else
			x--;
	}
	cout << x;
}	
