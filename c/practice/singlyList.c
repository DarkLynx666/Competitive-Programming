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

//insertion and stuff
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


// deletion

//lets delete shaan (deletion from a specific position)

// shaan->next = NULL;

// jarif->next = atik;
// free(shaan);

// lets delete jarif (deletion from beginning)

// head = jarif->next;
// jarif->next = NULL;

// lets delete labib (deletion from the end)

// atik->next =NULL;


struct node *temp2;
temp2 = head;

// print traversal
while(temp2 != NULL){

    printf("New linked list: %d\n",temp2->data);
    temp2 = temp2->next;

}

// lets search 21

struct node *search;
search = head;

while(search->data != 21){
    printf("\nnot found\n");
    search = search->next;
}

printf("found %d",search->data);

return 0;
}