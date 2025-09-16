#include <stdio.h>
int main(){
    int n,target,index=-1;
    printf("value of array size: \n");
    scanf("%d",&n);
     printf("value of k: \n");
     scanf("%d",&target);
    int arr[n];

    printf("array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int low,mid,high;
    high = n-1;
    low =0;

     while(low<=high)
     {
         mid = (low+high)/2;
         if(arr[mid]== target)
         {
             index =mid;
             break;
         }
         else if(arr[mid]>target)
         {
             high = mid-1;
         }
          else if(arr[mid]<target)
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