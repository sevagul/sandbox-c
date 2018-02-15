#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

typedef struct Address 
{
	char city[20];
	char street[20];
	int numb;
} Adress;

int aresamewords(char* a, char* b)
{
	int res=1, i=0;
	do
	{
		if(a[i]!=b[i]) res=0;
		i++;
	} while(a[i]!='\0'||b[i]!='\0');
	return res;
}

int countstreets(Adress** p, int n, char* a)
{
	int i;
	int c=0;
	for( i=0; i<n; i++)
	{
		if (aresamewords(p[i]->street, a)) c++;				
	}
	printf("Number of elements with matched street is :%d", c );
	return c;
		
}

Adress* getmem()
{
	Adress *p;
	if(!(p=(Adress*)malloc(sizeof(Adress))))
	{
		printf("Allocation Error");
		exit(0);
	}

	return p;
}

void getword(char* w)
{
	int j;
	char temp;
	for(j=0; isalpha(temp = getchar()); j++)
			{
				w[j]=temp;	
			}	
			w[j]='\0';
}

Adress** get_mem(int n)
{
	int i=0, j=0;
	char temp;
	Adress **p;
	if(!((p=(Adress**)malloc(sizeof(Adress*)*n))))
	{
		printf("Allocation Error");
	}
	else
	{
		for(i=0; i<n; i++)
		{
			p[i]= getmem();
			printf("Enter city, street and number for house #%d: ", i+1);
			getword(p[i]->city);
			getword(p[i]->street);
			scanf("%d", &(p[i]->numb));
			puts(p[i]->city);
			puts(p[i]->street);
			printf("%d\n", p[i]->numb);
			
		}
	}
	return p;
}

int main()
{
	int n=3;
	Adress** p;
	p=get_mem(n);
	char a[50]="must";
	countstreets(p, n, a);
	getch();
	return 0;
}
