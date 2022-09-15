#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	set<char> charset;
	for(int i=0; i<s.size(); i++) {
		if(charset.find(s[i]) == charset.end()) {
			charset.insert(s[i]);
		}
	}
	if(charset.size()%2==0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
}
