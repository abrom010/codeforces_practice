#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	getline(cin, a);
	getline(cin, b);

	for(int i=0; i<a.size(); i++) {
		if(toupper(a[i]) < toupper(b[i])) {
			cout << -1;
			return 0;
		} else if(toupper(a[i]) > toupper(b[i])) {
			cout << 1;
			return 0;
		}
	}
	cout << 0;
}
