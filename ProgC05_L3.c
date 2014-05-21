#include <stdio.h>
#include <math.h>

int c,n;

void imprime ()
{
  printf("Primeiros numeros naturais impares para numero %d:\n",n);
  for(c=1; c<=n; c++)
  {
  	if ((c%2)==1)
  	{  
		printf("  %d", c); 
   	}
  }

}

int entrada()
{
  printf("Digite numero inteiro: \n");
  scanf("%d", &n);
  return 0;
}

int main()
{
    entrada();
	imprime();
	return 0;
}
	




