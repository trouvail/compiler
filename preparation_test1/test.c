#include <stdio.h>

int main()
{
	int a, b;
	float c, d;
	a = 1;
	b = 5;
	c = 9;
	d = 10;
	int i = 0;
	while(i < 5)
	{
		a = a + b;
		c = c * d;
		a = a - b;
		c = c / d;
		i = i + 1;
		if(a > 0) continue;
		else break;
	}
	if(a > 0)
	{
		a += 1;
	}
	else
	{
		a -= 1;
	}

	printf("%d\n", 1);
	return 0;
}
