#include<stdio.h>
int main()
{
	int num1,num2=0,num3=0,I=1;
	while(I<=20)
	{
		printf("Ingrese el sueldo:");
		scanf("%d",&num1);
		if (num1>2000)
		{
			num2=num2+1;
			I++;
		}
		else
		{
			num3=num3+1;
			I++;
		}
	}
	printf("%d personas ganan mas de $2000 y %d ganan menos de $2000",num2,num3);
	return 0;
}
