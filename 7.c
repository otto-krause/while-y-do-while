#include <stdio.h>

int main()
{
    int num1=1,num2=1,num3=0,sum=0,may=0,may2=0,res=0,dia=0;
    while (num1 <= 20)
        {
        while (num2 <= 15)
        {
            printf("Ingrese ventas del vendedor %d en el dia %d: ",num1,num2);
            scanf("%d", &num3);
            sum=sum+num3;
            if (num3>may)
            {
                may= num3;
            }
            num3=0;
            num2++;
        }
        num2=0;
        printf("El vendedor %d vendio en total %d unidades\n",num1,sum);
        res=res+sum;
        sum=0;
        if (may>may2)
        {
            may2=may;
            dia=num1;
        }
        may=0;
        num1++;
      }
    printf("El Total de unidades vendidas fue de: %d\nEl vendedor con una mayor venta diaria fue el: Vendedor %d\n",res, dia);
    return 0;
}
