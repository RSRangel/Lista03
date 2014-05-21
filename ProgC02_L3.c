#include <stdio.h>
#include <math.h>

float b,d,te=0.0,tf=0.0,tg=0.0,maior=0.0,menor=0.0;
int a,e=0,f=0,g=0,h=0;

void imprime ()
{
	printf("Media Consumo Total(KWh): %.2f\n",(te+tf+tg)/(e+f+g));	
	printf("Consumo Residencial Total(KWh): %.2f\n",te);
	printf("Consumo Comercial Total(KWh): %.2f\n",tf);	
	printf("Consumo Industrial Total(KWh): %.2f\n",tg);	
	printf("Maior Consumo(KWh): %.2f\n",maior);	
	printf("Menor Consumo(KWh): %.2f\n",menor);		
}

int entrada ()
{
	int x,c;
	printf("Digite numero habitantes: \n");
	scanf("%d", &a);
	printf("Digite valor do KWh (R$): \n");
	scanf("%f", &b);
	for (x=0;x<a;x++)
	{
		printf("Digite qte. mensal do KWh: \n");
		scanf("%f", &d);
		printf("Digite codigo do consumidor: \n");
		printf("1 - Residencial\n");
		printf("2 - Comercial\n");
		printf("3 - Industrial\n");	
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			e++;
			te=te+d;
			break;
		case 2:
			f++;
			tf=tf+d;
			break;
		case 3:
			g++;
			tg=tg+d;
			break;
		default:
			return 0;
			break;			
		}
		h++;
		if (h==1)
		{
			menor=d;
		}
		if (d>=maior)
		{
			maior=d;
		}
		if (d<=menor&& d>=0)
		{
			menor=d;
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
	




