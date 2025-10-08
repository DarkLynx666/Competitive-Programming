#include<stdio.h>
int main(){

    int x,y,q;
    scanf("%d %d",&x,&y);

    if((x+y)>= 0 && (x+y) <8){
    q = 7 - (x+y);
    }

    printf("%d",q);

    return 0;

}