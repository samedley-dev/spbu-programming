#pragma once
#define ld long double

ld f1(int n)
{
	ld p1 = 0; ld p2 = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!p2) p2 = 1;
		else {
			ld a = p1;
			p1 = p2;
			p2 += a;
		}
	}
	return p2;
}

ld f2(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return f2(n - 1) + f2(n - 2);
}

ld f3(int n)
{
	ld phi = (1 + sqrt(5)) / 2;
	ld psi = (1 - sqrt(5)) / 2;
	return (pow(phi, n) - pow(psi, n)) / sqrt(5);
}
