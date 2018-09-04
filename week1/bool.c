#include<stdio.h>
 
int main(void)
{
	char x;
	scanf("%c", &x);
	if (x =='y' || x =='Y')
	{
		printf("yes\n");
	}

	else if (x =='n' || x == 'N')
	{
		printf("no\n");
	}
	return 0;
}

