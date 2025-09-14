#include<stdio.h>
void sort(int a[],int max,int size){
        int c[max+1];
        int out[size];
        for(int i=0;i<=max;i++){
            c[i]=0;
        }

        for(int i =0; i<size;i++){
            c[a[i]]++;
        }

        for(int i=1;i<=max;i++){
            c[i]= c[i] + c[i-1];
        }

        for(int i=size-1;i>=0;i--){
                out[--c[a[i]]] = a[i];
        }

        for(int i = 0;i<size;i++){
            a[i]=out[i];
        }

}

int main()
{
    int size;
    printf("enter initial array size: ");
    scanf("%d",&size);

    int a[size];

    for(int i=0;i<size;i++){
        printf("enter value at index %d: \n",i);
        scanf("%d",&a[i]);
    }
  
    int max=0;
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("max is %d\n",max);

    sort(a, max, size);
    
    for(int i=0;i<size;i++){
        printf("the value at index %d is %d\n",i,a[i]);
    }

    return 0;
}