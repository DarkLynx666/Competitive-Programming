#include<stdio.h>
int main(){
    int t;
    int chef;
    int chef2;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&chef);
        chef2 = chef - 10;
        printf("%d\n",chef2);

            t--;
    }

    return 0;
}