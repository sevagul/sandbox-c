#include <stdio.h>
#include <conio.h>

int main(void)
{
	unsigned n, x, y, z, t, k;
	printf("vvedite chislo: ");
	scanf("%u", &n);
	if (n!=1)
		printf("2, ");
	else
		printf("2.\n");
	t=2; k=2;
	for (x=3; t<n+1; x+=2)
	{
		z = 1;
		for (y=3; y*y <= x; y+=2)
		{
			if (x%y == 0)
			{
				z = 0;
				break;
			}
		}
		if (z)
		{
			if (k!=10)
			{
				if (t!=n)
				{
					printf("%u, ", x);
				}
				else
				{
					printf("%u.\n", x);
				}
			}
			else
			{
				if (t!=n)
				{
					printf("%u,\n", x);
					k=0;
				}
				else
				{
					printf("%u.\n", x);
				}
			}
			t++;
			k++;
		}
	}

	getch();
	return 0;
}