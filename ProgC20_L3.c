#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int a,c,n;
char v1[100],v2[100];

int main()
{
  srand(time(NULL));	
  printf("Digite qte. elementos do vetor:\n");  
  scanf("%d",&n);
  for(c=0; c<n; c++)
  {
    a=rand()%50;
    v1[c]=a;
  }
  a=0;
  for(c=0; c<n; c++)
  {   
    if ((v1[c]%2)!=0)
    { 
       a++;
 	   v2[a-1]=v1[c];
    }
  }  
  printf("Vetor Original:\n");  
  for(c=0; c<n; c++) 
  {
    printf("%d ",v1[c]);  
  }	
  printf("\nVetor com Impares:\n");  
  for(c=1; c<=a; c++) 
  {
    printf("%d ",v2[c-1]);  
  }	  
  return 0;
}
	




