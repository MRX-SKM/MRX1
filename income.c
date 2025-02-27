#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the income: ");
    scanf("%f",&a);
    if(a <= 250000)
    {
        printf("No Tax");
    }
    else if((a >= 250001)&&(a <= 500000))
    {
        b = (a*5)/100;
        printf("your tax amount is: %f\n",b);
    }
    else if((a >= 500001)&&(a <= 1000000))
    {
        b = (a*20)/100;
        printf("your tax amount is: %f\n",b);
    }
    else if(a >= 1000001)
    {
        b = (a*30)/100;
        printf("your tax amount is: %f\n",b);
    }
    return 0;
}
