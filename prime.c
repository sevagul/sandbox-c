#include <stdio.h>
#include <conio.h>

int main(void)
{
	unsigned n, x, y, z, t;
	printf("vvedite chislo: ");
	scanf("%u", &n);

	printf("2, ");
	t=1;
	for (x=3; t<n; x+=2)
	{
		z = 1;
		for (y=3; y<x/2; y+=2)
		{
			if (x%y == 0)
			{
				z = 0;
				break;
			}
		}
		if (z)
		{
			t++;
			printf("%u, ", x);
		}
	}

	getch();
	return 0;
}