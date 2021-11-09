#include <stdio.h>
int main()
{
	int num=0, num2=0;
	printf("Ingrese un numeros : ");
	scanf("%d",&num);
	printf("Ingrese otro numero : ");
	scanf("%d",&num2);
	while (num<num2-1)
        {
            num++;
            printf("%d \n",num);
	    }
	    while(num2<num-1)
        {
            num2++;
            printf("%d \n",num2);
        }
	return 0;
}
