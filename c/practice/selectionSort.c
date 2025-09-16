#include<stdio.h>
int main()
{
    int a[5]= {16,18,3,9,4};

    for(int i=0;i<4;i++){
        int min = i;

        for(int j=i+1;j<5;j++){
            if(a[j]>a[min]){
                min = j;
            }
            if(min!=i){
                int temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }
    }

     for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

}