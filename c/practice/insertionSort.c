#include<stdio.h>
int main()
{
    int a[5]= {16,18,3,9,4};
    
    for(int i=1;i<5;i++){
        int temp = a[i];
        int j=i-1;
        
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = temp;
    }

    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}