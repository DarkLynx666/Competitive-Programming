#include<stdio.h>
int main()
{
    int a,b,d,r;
    double f;

    scanf("%d %d",&a,&b);

    if(a>=1 && b<=10^9){
    d = a / b;
    r = a % b;
    f =  a /(double) b;
    }

    printf("%d %d %.5lf",d,r,f);


    return 0;
}