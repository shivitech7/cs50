#include<stdio.h>

int main(void)
{
	   for(int i=0; i<6; i++)
	   {
		   for(int j=0; j<6; j++)
		   {
			   if(i+j>=6)
			   { printf("#");     }
			   else
			   { printf(" ");     }
		   }
		   printf("\n");
	   }
}

   

