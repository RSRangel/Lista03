#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int a=0,c,tot=0;
char v1[10],v2[10];

int main()
{
  srand(time(NULL));	
  for(c=0; c<10; c++)
  {
    a=(rand()%50);
    v1[c]=a;
  }
  printf("Vetor Original:\n");  
  for(c=0; c<10; c++) 
  {
    printf("%d ",v1[c]);  
  }	
  for(c=0; c<10; c++)
  { 
    a=v1[c];  
	if (a==v1[c+1])
    { 
    	v2[tot]=a;
    	tot++;
  	}
  }  
  if (tot==0)
  {
      printf("\nSem valores identicos");  
  }	  
  else
  {
  	  printf("\nValores Identicos:\n");
      for(c=0; c<tot; c++) 
	  {
  		  printf("%d ",v2[c]);  
	  }	
  }
  return 0;
}
	




