#include<stdio.h>
int main(){
    int noProblems;
    int limit;
    scanf("%d %d",&noProblems,&limit);

    int sum=0;
    int score=0;
    while (noProblems>0)
    {
        scanf("%d",&score);
        if(limit>=score){
        sum+= score;
        }
        noProblems--;
    }

    printf("%d\n",sum);
    
    return 0;
}