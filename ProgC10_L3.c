#include <stdio.h>
#include <string.h>

int c,n=0;
char v[]="00011001010011";

int main()
{
  for(c=0; c<strlen(v); c++)
  {
  	if (v[c]=='1')
  	{  
  		n++;
   	}
  }
  printf("Quantidade de 1 na string %s :%d ",v, n);   	
  return 0;
}
	




