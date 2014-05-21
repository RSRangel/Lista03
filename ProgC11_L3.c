#include <stdio.h>
#include <string.h>

int main()
{
  char v1[]="00011001010011";
  printf("String original:   %s \n",v1);   
  int c=strlen(v1), n=0;
  while (n<c)	
  {
  	if (v1[n]=='0')
  	{  
  		v1[n]='1';
   	}
   	n++;
  }
  printf("String modificada: %s ",v1);   	  	
  return 0;
}
	




