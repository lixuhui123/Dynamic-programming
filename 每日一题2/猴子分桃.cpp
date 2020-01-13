#include <stdio.h>
#include <iostream>
int maincrasedwaw()
{
	int n, i;
	int sum, l, t;
	while (scanf("%d", &n) == 1 && n)
	{
		l = 1;
		for (i = 1; i < n; i++)
			l *= 5;
		sum = 1 + 5 * (l - 1);
		t = sum;
		for (i = 1; i <= n - 1; i++)
			t = (t - 1) / 5 * 4;
		printf("%d %d\n", sum, t + n);
	}
	printf("%d %d\n", sum, t + n);
	return 0;
}
