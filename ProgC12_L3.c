#include <stdio.h>
#include <string.h>

int main()
{
  int n=1,c;
  printf("Digite numero inteiro positivo: \n"); 
  scanf("%d",&c); 
  printf("Divisores de %d:\n",c);   	
  while (n<=c)	
  {
  	if (c%n==0)
  	{  
		printf("%d\n",n);   
   	}
   	n++;
  }
  return 0;
}
	




