#include <stdio.h>
int main()
{
	int num,mul=1,i=1;
	printf("Ingresar un numero para saber su factorial :");
	scanf("%d",&num);
	while(i<=num)
        {
            mul=mul*i;
		    i++;
	    }
	printf("Su Factorial es : %d",mul);
	return 0;
}
