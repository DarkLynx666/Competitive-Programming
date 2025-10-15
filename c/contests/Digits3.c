#include<stdio.h>
int main()
{
    int prometheus, x,y,z;
    scanf("%d",&prometheus);

     z = prometheus % 10;
     prometheus = prometheus /10;
    y = prometheus % 10;
    prometheus = prometheus /10;
    x = prometheus;   

    int one = 100 * x + 10 * y + z;
    int two =100 * y + 10 * z + x;
    int three = 100 * z + 10 * x + y;

    int total = one + two + three;

    printf("%d",total);

    return 0;
}