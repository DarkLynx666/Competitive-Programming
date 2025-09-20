#include<stdio.h>

int main() {
    int n;
    printf("Enter queue size: ");
    scanf("%d", &n);

    int qw[n];
    int option;
    int item;
    int f = -1, r = -1;

    while(1) {
        printf("\n\nType..\n1 to Enqueue\n2 to Dequeue\n3 to check if the Queue is full\n4 to check if the Queue is empty\n5 to display queue\n0 to exit\n");
        printf("Enter option: \n");
        scanf("%d", &option);

        if(option == 1) {
            if((f == 0 && r == n - 1) || (f == r + 1)) {
                printf("Overflow (queue is full)\n");
            } else {
                printf("Enqueue value: \n");
                scanf("%d", &item);

                if(f == -1 && r == -1) {
                    f = 0;
                    r = 0;
                    qw[r] = item;
                    printf("Enqueued %d\n", item);
                } else if(r == n - 1 && f != 0) {
                    r = 0;
                    qw[r] = item;
                    printf("Enqueued %d\n", item);
                } else {
                    r++;
                    qw[r] = item;
                    printf("Enqueued %d\n", item);
                }
            }
        } else if(option == 2) {
            if(f == -1) {
                printf("Underflow\n");
            } else if(f == r) {
                printf("Dequeued element %d\n", qw[f]);
                f = -1;
                r = -1;
            } else if(f == n - 1) {
                printf("Dequeued element %d\n", qw[f]);
                qw[f] = NULL;
                f = 0;
            } else {
                printf("Dequeued element %d\n", qw[f]);
                qw[f] = NULL;
                f++;
            }
        } else if(option == 3) {
            if((f == 0 && r == n - 1) || (f == r + 1)) {
                printf("Overflow (queue is full)\n");
            } else {
                printf("Queue is not full\n");
            }
        } else if(option == 4) {
            if(f == -1) {
                printf("Queue is empty\n");
            } else {
                printf("Queue is not empty\n");
            }
        } else if(option == 5) {
            if(f == -1) {
                printf("Queue is empty\n");
            } else {
                int i = f;
                printf("Queue contents: ");
                while(i != r) {
                    printf("%d ", qw[i]);
                    i++;
                    if(i == n) { i = 0; }
                }
                printf("%d", qw[r]);
                printf("\n");
            }
        } else if(option == 0) {
            break;
        } 
    }

    return 0;
}
