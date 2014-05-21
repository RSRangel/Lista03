#include <stdio.h>
#include <math.h>

int a,c,n;

void imprime ()
{
  for(c=1; c<=n; c++)
  {
  	if ((n%c)==1)
  	{  
  		a++;
   	}
  }
  if (a==2)
  	 printf(" %d e numero primo", n);   
  else
   	 printf("%d nao e numero primo", n);   	
}

int entrada()
{
  printf("Digite numero inteiro para verificar se e primo: \n");
  scanf("%d", &n);
  return 0;
}

int main()
{
    entrada();
	imprime();
	return 0;
}
	




