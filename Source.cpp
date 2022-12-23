#include<iostream>
#include "fibonacci.h"
using namespace std;

int main()
{
	int n; cin >> n;
	while (true)
	{
		if (n < 0 || n > 40)
			cin >> n;
		else break;
	}
	cout << f1(n) << "\n";
	cout << f2(n) << "\n";
	cout << f3(n) << "\n";
}
