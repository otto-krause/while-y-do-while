#include <stdio.h>
int main()
{
	int num1=0,num2=0,mul=1,i=1;
	printf("Ingrese el numero base: ");
	scanf("%d",&num1);
	printf("Ingrese numero potencial:");
	scanf("%d",&num2);
	while(i<=num2)
        {
            mul=mul*num1;
		    i++;
	    }
	printf("La potencia es de : %d",mul);
	return 0;
}
