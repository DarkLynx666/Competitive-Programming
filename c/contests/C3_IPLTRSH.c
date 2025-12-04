#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    int M,N;
    while (t>0)
    {
       scanf("%d %d",&N,&M);
       int will;
       will = N-M;
       if(will<0){
        will = 0;
       }
       printf("%d\n",will);
       t--;
    }
    
    return 0;
}