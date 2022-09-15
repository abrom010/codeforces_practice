#include <bits/stdc++.h>
using namespace std;

int main() {
	int count=0;
	int n;
	cin >> n;

	char c;
	char last_char;
	cin >> last_char;

	while(cin >> c) {
		if(c==last_char) count++;
		else last_char = c;
	}
	cout << count;
}
