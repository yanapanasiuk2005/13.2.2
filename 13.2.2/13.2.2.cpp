#include <ctype.h>
#include <string>
#include <iostream>
using namespace std;
string Change(string& s)
{
	int k = 0,
		m = 1,
		n = 2;
	for (size_t i = 0; i < s.size(); i++) {
		if (isalnum(s[i])) {
			swap(s[i], s[k]);
			k += 3;
		}
		else if (isalpha(s[i])) {
			swap(s[i], s[m]);
			m += 3;
		}
		else {
			swap(s[i], s[n]);
			n += 3;
		}
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	size_t maxlen = str.size() * 3;
	str.resize(maxlen);
	string dest = Change(str);
	cout << "Modified string: " << dest << endl;
	return 0;
}
