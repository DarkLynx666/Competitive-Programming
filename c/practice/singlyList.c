#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

int main(){
head = NULL;

struct node *shaan;
shaan = (struct node*)malloc(sizeof(struct node));

head = shaan;

shaan->data = 21;
shaan->next = NULL;


struct node *jarif = (struct node*)malloc(sizeof(struct node));
 
jarif->data = 420;
jarif->next = shaan;

head = jarif;

struct node *labib = (struct node*)malloc(sizeof(struct node));
labib->data = 69;

shaan->next = labib;
labib->next = NULL;

struct node *atik = (struct node*)malloc(sizeof(struct node));

atik->data = 911;
atik->next = labib;

shaan->next = atik;


// traversal section kachaowwwww!!
struct node *temp;
temp = head;

// print traversal
while(temp != NULL){

    printf("linked list: %d\n",temp->data);
    temp = temp->next;

}


return 0;
}