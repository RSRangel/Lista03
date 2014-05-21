#include <stdio.h>
#include <math.h>

int c;

void entrada ()
{
  printf("Numeros naturais de 1 a 100 (for):\n");
  for(c=1; c<=100; c++)
  {
	   printf(" %d",c); 
  }
  printf("\nNumeros naturais de 1 a 100 (while):\n");
  c=1;
  while(c<=100)
  {
	   printf(" %d",c++); 
  }
  printf("\nNumeros naturais de 1 a 100 (do while):\n");
  c=1;
  do
  {
	   printf(" %d",c++); 
  }  
  while(c<=100);
}

int main()
{
    entrada();
	return 0;
}
	




