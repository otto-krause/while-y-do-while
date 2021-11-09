#include<stdio.h>
int main()
{
	int num=0,cant1=0,cant2=0,cant3=0,I=1;
	while(I<=10)
	{
		printf("Escriban los numeros : ");
		scanf("%d",&num);
		if (num>0)
		{
			cant1=cant1+1;
			I++;
		}
		else
		{
			if (num==0)
			{
				cant3=cant3+1;
				I++;
			}
			else
			{
				cant2=cant2+1;
				I++;
			}
        }
	}
	printf("La cantidad de numeros positivos es %d ,de negativos es %d y la de ceros es %d",cant1,cant2,cant3);
	return 0;
}
