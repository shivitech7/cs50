#include<stdio.h>

int main(void)
{
	int n,i,j,k;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=n-i; j<n-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("#");
		}
	for(j=1; j<=2; j++)
	{    printf(" ");    }
	
          for(k=1; k<=i; k++)
	  {   printf("#");   }
	  printf("\n");
	}
}
