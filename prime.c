#include <stdio.h>
#include <conio.h>

int main(void)
{
	unsigned int n;
	unsigned int x, y, z, t;
	printf("vvedite chislo: ");
	scanf("%u", &n);

	printf("2, ");
	t=1;
	for (x=3; t<n; x=x+2)
	{
		z = 1;
		for (y=3; y<x/2; y=y+2)
		{
			if (x%y == 0)
			{
				z = 0;
				break;
			}
		}
		if (z)
		{
			t = t+1;
			printf("%u, ", x);
		}
	}

	getch();
	return 0;
}