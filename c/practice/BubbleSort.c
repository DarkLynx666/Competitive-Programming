#include <stdio.h>

int main()
{
    int sizz;
    printf("arr size: \n");
    scanf("%d",&sizz);
    int arr[sizz];

    printf("enter %d elements: \n", sizz);
    for(int i=0;i<sizz;i++){
        scanf("%d", &arr[i]);
    }


  for(int i=0;i<sizz-1;i++){
        for(int j=0; j<sizz-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("sorted array(asc): \n");
    for(int i=0;i<sizz;i++){
        printf("%d\n", arr[i]);
    }

    return 0;

}


