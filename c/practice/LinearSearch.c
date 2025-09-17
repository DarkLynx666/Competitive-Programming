#include <stdio.h>
int main()
{
    //k = targeted value
    //index = to store the index of the targeted value
    
    int n,k,index=-1;
    printf("value of array size: \n");
    scanf("%d",&n);
     printf("value of k: \n");
     scanf("%d",&k);
    int arr[n];

    printf("array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
        {
        if(k == arr[i])
            {
             index =arr[i];
             break;
            }

    }

    if(index == k){
        printf("Found");
    }
    else {
        printf("not found");
    }

    return 0;

}