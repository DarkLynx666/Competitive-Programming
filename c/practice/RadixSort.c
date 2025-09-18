#include <stdio.h>

void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0}; 

    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[--count[digit]] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

//main radix sort function
void radixSort(int arr[], int n) {
    //max number to know number of digits
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    //applying counting sort to each digit place
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

int main() {
    int size;
    printf("enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    radixSort(arr, size);

    printf("sorted array (asc):\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
