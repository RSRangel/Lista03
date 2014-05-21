#include <stdio.h>
#include <math.h>

int c,n,seguinte,primeiro=0,segundo=1;

void imprime ()
{
  printf("Série de Fibonacci para numero %d:\n",n);
  for(c=0; c<=n; c++)
  {
  	if (c<=1)
  	{  
  		seguinte=c;
  	}
  	else
  	{
  		seguinte=primeiro+segundo;	
  		primeiro=segundo;
  		segundo=seguinte;
  	}
    printf("%d\n", seguinte);
  }
  printf("%d\n", seguinte+primeiro);
}

int entrada()
{
  printf("Digite numero de termos da sequencia Fibonacci: \n");
  scanf("%d", &n);
  return 0;
}

int main()
{
    entrada();
	imprime();
	return 0;
}
	




