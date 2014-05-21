#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int a=0,c,tot=0;
char v1[10];

int main()
{
  srand(time(NULL));	
  for(c=0; c<10; c++)
  {
    a=rand()%99;
    v1[c]=a;
  }
  for(c=0; c<10; c++)
  {   
    if ((v1[c]%2)==0)
    { 
       tot++;
    }
  }  
  printf("Vetor Original:\n");  
  for(c=0; c<10; c++) 
  {
    printf("%d ",v1[c]);  
  }	
  printf("\nQuantidade de pares:\n");  
  printf("%d ",tot);
  return 0;
}
	




