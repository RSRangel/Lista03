#include <stdio.h>
#include <math.h>

int a,b=0,maior=0,menor=0;

void imprime ()
{
	printf("Maior numero: %d\n",maior);
	printf("Menor numero: %d\n",menor);
}

int entrada ()
{
	while (a>=0)
	{
		printf("Digite numero inteiro: \n");
		scanf("%d", &a);
		b++;
		if (b==1)
		{
			menor=a;
		}
		if (a>=maior)
		{
			maior=a;
		}
		if (a<=menor&& a>=0)
		{
			menor=a;
		}	
	}
	return 0;
}

int main()
{
    entrada();
	imprime();
	return 0;
}
	




