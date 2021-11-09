#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,pro1,pro2,a=1,b=0;
	while(a<=30)
	{
        a++;
		printf("Ingrese las 10 notas: ");
		scanf("%d%d%d%d%d%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);
		pro1=(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
		printf("El promedio del alumno %d es %d\n",a,pro1);
		b=b+pro1;
	}
	pro2=a/30;
	printf("El promedio de la clase es: %.1f\n",pro2);
	return 0;
}
