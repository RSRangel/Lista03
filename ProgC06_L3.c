#include <stdio.h>
#include <math.h>

int c,n=2;

void entrada ()
{
  printf("Soma dor 50 primeiros numeros naturais pares:\n");
  for(c=1; c<=100; c++)
  {
  	if ((c%2)!=1)
  	{  
  		n=n+c;
   	}
  }
  printf(" %d",n); 
}

int main()
{
    entrada();
	return 0;
}
	




