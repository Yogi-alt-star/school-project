#include<stdio.h>
#include<math.h>
int fun(double a ,double b ,double c)
{

return sqrt((b*b-4*a*c)/(2*a));
}
int main()
{
    double a=0,b=0,c=0,m=0;
    printf("Enter the valude of coefficient of X^2\n");
    scanf("%lf",&a);
    printf("Enter the valude of coefficient of X\n");
    scanf("%lf",&b);
    printf("Enter the constant\n");
    scanf("%lf",&c);
    if(b*b<4*a*c)
    {
        printf("\nYour problem is not solved in real codinate axis");
    }
    else{
    m=-b/(2*a);
    double x=fun(a,b,c);
    printf("\nYour first solution is =%.2lf",m+x);
    printf("\nYour first solution is =%.2lf",m-x);
    }

    return 0;
}