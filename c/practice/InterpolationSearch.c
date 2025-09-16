#include <stdio.h>
int main(){

    // k is target
    // we are searching the 'k' value in the array
    
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

    int low,mid,high;
    high = n-1;
    low =0;

     while(low<=high && k<=arr[high] && k>= arr[low])
     {
       mid = low + (((k - arr[low]) * (high - low)) / (arr[high] - arr[low]));
         if(arr[mid]== k)
         {
             index =mid;
             break;
         }
         else if(arr[mid]>k)
         {
             high = mid-1;
         }
          else if(arr[mid]<k)
         {
             low = mid+1;
         }

     }


    if(index != -1){
        printf("Found");
    }
    else {
        printf("not found");
    }

    return 0;

}

