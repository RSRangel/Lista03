#include <stdio.h>
#include <string.h>

int c,n,maior=0,pos=0;
char v[10];

int main()
{
  for(c=1; c<=10; c++)
  {
    printf("Digite %do. elemento do vetor: ",c);  
    scanf("%d",&n);
    v[c-1]=n;
  	if (v[c-1]>=maior)
  	{  
  		maior=v[c-1];
  		pos=c;
   	}
  }
  printf("Vetor:\n");  
  for(c=1; c<=10; c++) 
  {
    printf(" %d",v[c-1]);  
  }	
  printf("\nMaior elemento e Posicao: %d %d",maior,pos);
  return 0;
}
	




