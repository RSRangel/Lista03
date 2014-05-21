#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int a=0,c;
char v1[10];

int main()
{
  srand(time(NULL));	
  for(c=0; c<10; c++)
  {
    a=(rand()%200)-100;
    v1[c]=a;
  }
  printf("Vetor Original:\n");  
  for(c=0; c<10; c++) 
  {
    printf("%d ",v1[c]);  
  }	
  for(c=0; c<10; c++)
  {   
    if (v1[c]<0)
    { 
       v1[c]=0;
    }
  }  
  printf("\nVetor modificado:\n");  
  for(c=0; c<10; c++) 
  {
    printf("%d ",v1[c]);  
  }	
  return 0;
}
	




