#include<stdio.h>
int fun(int);
int main()
{
    int i;
    int l=1189,b=841;

    for (i=0;i<=8;i++)
    {
        if(l>b)                                                                   
        {
            
            printf("Dimention of A%d is = %d mm x %d mm\n",i,l,b);
            l=fun(l);
        }
        else 
        {
            
            printf("Dimention of A%d is= %d mm x %d mm\n",i,b,l);
            b=fun(b);
        }
    }
     return 0;

}
int fun(int x)
{
    return x/2;
}