#include <stdio.h>
int main()
{
	int num=0,num1=0,div=0,pro=0,i= 0;
	printf("ingrese Ingrese 15 numeros: ");
	while(i<15)
	{
		scanf("%d", &num);
		num1=num1+num;
		i++;
		if (pro<num)
		{
			pro=num;
		}
	}
	div=num1/15;
	printf("El promedio es %d y el mayor es : %d ",div,pro);
	return 0;
}
