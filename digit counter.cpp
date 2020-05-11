// digit counter
// using recursion
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int digicnt(int x);
int main ()
{
	int i;
	scanf("%d", &i);
	printf("The number of digits is: %d",digicnt(i));
	getch();
}
int digicnt(int x)
{
	if (x == 0) return 0;
	else
		{
			return 1 + digicnt(x/10);
		}
}
