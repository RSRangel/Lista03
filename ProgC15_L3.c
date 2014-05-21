#include <stdio.h>
#include <string.h>

int main()
{
  int n=1,tot=0;
  printf("Soma dos divisores de 3 e 5 ate 1000: \n"); 
  while (n<=1000)	
  {
  	if ((n%3==0) || (n%5==0))
  	{  
		printf("%d ",n);   
		tot=tot+n;
   	}
   	n++;
  }
  printf("\n%d\n",tot);   
  return 0;
}
	




