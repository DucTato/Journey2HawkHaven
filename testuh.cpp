#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 5
int i,l,j,min;
void swap(int &Y,int &X);
int a[MAX];
main ()
{
	scanf("%d", &l);
	for (i=0;i<l;i++)
		{
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
	for (i=0;i<l-1;i++)
		{
			min = i;
			for (j=i+1;j<l;j++)
				{
					if (a[min]>a[j]) min = j;	
				}
			if (min != i) swap(a[i],a[min]);
		}
	for (i=0;i<l;i++)
		{
			printf("%d ", a[i]);
		}
}
void swap(int &Y,int &X)
{
	int temp;
	temp = Y;
	Y = X;
	X = temp;
}
