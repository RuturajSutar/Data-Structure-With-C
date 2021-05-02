#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *current = NULL;
struct node *newnode = NULL;
struct node *nextnode = NULL;
struct node *tail = NULL;
int count = 0;
int pos;

void create(){
    char ch;
    while(true){
        printf("\nDo you want to insert node in linked list(y/n) : \n");
        scanf(" %c" , &ch);
        if(ch == 'y'){
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data for node : \n");
            scanf("%d" , &newnode->data);
            newnode->next = NULL;
            newnode->prev = NULL;
            if(head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                newnode->prev = tail;
                tail = newnode;
            }
            count++;
        }
        else{
            break;
        }
    }
}

void display(){
    current = head;
    while(current != NULL){
        printf("%d\t" , current->data);
        current = current->next;
    }
}

void insertFirst(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert at beginning : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    count++;
    printf("\nNode is inserted successfully.\n");
}

void insertLast(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert at end : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
    count++;
    printf("\nNode is inserted successfully.\n");
}

void insertAfter(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter position after you want to insert new node : \n");
    scanf("%d" , &pos);
    printf("\nEnter data for the node to insert : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    int i = 1;
    current = head;
    while(i < pos){
        current = current->next;
        i++;
    }
    newnode->prev = current;
    newnode->next = current->next;
    current->next = newnode;
    newnode->next->prev = newnode;
    count++;
    printf("\nNode is inserted successfully.\n");
}

void insertBefore(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter position at which or before you want to insert node : \n");
    scanf("%d" , &pos);
    printf("\nEnter data for the node to insert : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    int i = 1;
    current = head;
    while(i < (pos-1)){
        current = current->next;
        i++;
    }
    newnode->prev = current;
    newnode->next = current->next;
    current->next = newnode;
    newnode->next->prev = newnode;
    count++;
    printf("\nNode is inserted successfully.\n");
}

void deleteFirst(){
    current = head;
    head = current->next;
    head->prev = NULL;
    free(current);
    printf("\nFirst element is deleted.\n");
    count--;
}

void deleteLast(){
    current = tail;
    tail = current->prev;
    tail->next = NULL;
    free(current);
    printf("\nLast element is deleted.\n");
    count--;
}

void deletePos(){
    printf("\nEnter position to delete : \n");
    scanf("%d" , &pos);
    int i = 1;
    current = head;
    while(i < pos){
        current = current->next;
        i++;
    }
    current->prev->next = current->next;
    current->next->prev = current->prev;
    free(current);
    printf("\nNode at position %d is deleted.\n" , pos);
    count--;
}

void reverse(){
    current = head;
    nextnode = head;
    while(nextnode != NULL){
        nextnode = nextnode->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
    printf("\nDoubly linked list is reversed.\n");
}

int main(){
    int choice;
    while(true){
        printf("\n\nSelect any one choice from below : \n\n");
        printf("Create : 1 \n");
        printf("Display : 2 \n");
        printf("Count : 3 \n");
        printf("Insert at beginning : 4 \n");
        printf("Insert at end : 5 \n");
        printf("Insert after position : 6 \n");
        printf("Insert before position : 7 \n");
        printf("Delete first : 8 \n");
        printf("Delete last : 9 \n");
        printf("Delete at position : 10 \n");
        printf("Reverse : 11 \n");
        printf("Quit : 100 \n");
        printf("\nEnter your choice : \n");
        scanf("%d" , &choice);
        if(choice == 1){
            create();
        }
        else if(choice == 2){
            display();
        }
        else if(choice == 3){
            printf("\n\nTotal number of nodes(count) : %d\n\n" , count);
        }
        else if(choice == 4){
            insertFirst();
        }
        else if(choice == 5){
            insertLast();
        }
        else if(choice == 6){
            insertAfter();
        }
        else if(choice == 7){
            insertBefore();
        }
        else if(choice == 8){
            deleteFirst();
        }
        else if(choice == 9){
            deleteLast();
        }
        else if(choice == 10){
            deletePos();
        }
        else if(choice == 11){
            reverse();
        }
        else if(choice == 100){
            printf("\n\nThank You!!!!!!!\n");
            break;
        }
        else{
            printf("\nPlease enter correct choice.\n\n");
        }
    }
    return 0;
}
