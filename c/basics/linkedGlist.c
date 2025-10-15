#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};
struct node *head;


void insertAtBeg(int x){
    if(head == NULL){
      struct node *index = (struct node*)malloc(sizeof(struct node));
         index->data = x;
         index->next = NULL;
         head = index;
    }
    else{
       struct node *index2 = (struct node*)malloc(sizeof(struct node));
         index2->data = x;
         index2->next = head;
         head = index2;
    }
}

void display() {
    struct node *trav = head;
    printf("Linked list elements: ");
    while (trav != NULL) {
        printf("%d ", trav->data);
        trav = trav->next;
    }
    printf("\n");
}


int main(){
    int n,x;
    head = NULL;
    printf("enter amount of numbers: \n");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        printf("enter element: \n");
        scanf("%d",&x);
        insertAtBeg(x);
    }

    display();

     return 0;
}

