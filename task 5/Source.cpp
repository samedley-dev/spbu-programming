#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string s, s_reversed = "";
	cin >> s;
	if (s.size() <= 50)
	{
		for (int i = s.size() - 1; i >= 0; i--)
			s_reversed += s[i];
	}
	cout << s_reversed << "\n";
	// используя библиотеку algorithm
	if (s.size() <= 50)
	{
		reverse(s.begin(), s.end());
		cout << s;
	}
}
