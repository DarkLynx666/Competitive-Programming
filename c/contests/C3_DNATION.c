#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int y,x;
    while (t>0)
    {
       scanf("%d %d",&x,&y);
       int don = y-x;
      printf("%d\n",don);
      t--;
    }
    
return 0;

}