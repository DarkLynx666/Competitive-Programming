#include<stdio.h>
int main(){
    int n;
    int s=0;
    scanf("%d",&n);
    int a[7*n];
    
    for (int i = 0; i < 7*n; i++)
    {
         scanf("%d",&a[i]);
    }

    for(int i= 0; i< 7*n;i++){

        s = s+ a[i];
        if((i+1) % 7 == 0){
            printf("%d ",s);
            s=0;
        }
    }
    
    return 0;
}