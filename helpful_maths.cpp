#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int,int> m;
	m.insert(make_pair(1,0));
	m.insert(make_pair(2,0));
	m.insert(make_pair(3,0));
	int x;
	while(cin >> x) {
		m[x]+=1;
	}

	bool first = true;
	for(int i=1; i<=3; i++) {
		while(m[i]>0) {
			if(first) {
				cout << i;
				first = false;
			} else {
				cout << "+" << i;
			}
			m[i]--;
		}
	}
}
