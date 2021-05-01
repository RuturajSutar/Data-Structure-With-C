#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;
struct node *newnode = NULL;
int pos;
int count = 0;

void create(){
    char a;
    while(true){
        printf("\nDo you want insert node in linked list(y/n) : \n");
        scanf(" %c" , &a);
        if(a == 'y'){
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter number to insert into linked list : \n");
            scanf("%d" , &newnode->data);
            if(head == NULL){
                head = newnode;
                current = newnode;
            }
            else{
                current->next = newnode;
                current = newnode;
            }
            current->next = NULL;
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
    printf("\nEnter number to insert at beginning : \n");
    scanf("%d" , &newnode->data);
    newnode->next = head;
    head = newnode;
    count++;
}

void insertLast(){
    current = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter number to insert at end : \n");
    scanf("%d" , &newnode->data);
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newnode;
    newnode->next = NULL;
    count++;
}

void insertAfter(){
    printf("\nEnter position after you want to insert number :\n");
    scanf("%d" , &pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter number to insert : \n");
    scanf("%d" , &newnode->data);
    int i = 1;
    current = head;
    while(i < pos){
        current = current->next;
        i++;
    }
    newnode->next = current->next;
    current->next = newnode;
    count++;
}

void insertBefore(){
    printf("\nEnter position before you want to insert number : \n");
    scanf("%d" , &pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter number to insert : \n");
    scanf("%d" , &newnode->data);
    int i = 1;
    current = head;
    while(i<(pos-1)){
        current = current->next;
        i++;
    }
    newnode->next = current->next;
    current->next = newnode;
    count++;
}

void deleteFirst(){
    current = head;
    head = current->next;
    free(current);
    count--;
}

void deleteLast(){
    struct node *prevnode = NULL;
    current = head;
    while(current->next != NULL){
        prevnode = current;
        current = current->next;
    }
    prevnode->next = NULL;
    free(current);
    count--;
}

void deletePos(){
    printf("\nEnter position to delete : \n");
    scanf("%d" , &pos);
    current = head;
    struct node *prevnode = NULL;
    int i = 1;
    while(i<pos){
        prevnode = current;
        current = current->next;
        i++;
    }
    prevnode->next = current->next;
    free(current);
    count--;
}

void reverse(){
    struct node *prevnode = NULL;
    struct node *nextnode = head;
    current = head;
    while(nextnode != NULL){
        nextnode = nextnode->next;
        current->next = prevnode;
        prevnode = current;
        current = nextnode;
    }
    head = prevnode;
}

int main(){
    int choice;
    while(true){
        printf("\n\nSelect your choice : \n");
        printf("\n");
        printf("Create linked list : 1\n");
        printf("Display : 2\n");
        printf("Count : 3\n");
        printf("Insert at beginning : 4\n");
        printf("Insert at end : 5\n");
        printf("Insert after position : 6\n");
        printf("Insert before position : 7\n");
        printf("Delete first : 8\n");
        printf("Delete last : 9\n");
        printf("Delete at position : 10\n");
        printf("Reverse : 11\n");
        printf("Quit : 100\n");
        printf("\nSelect one choice : \n");
        scanf("%d" , &choice);
        printf("\n");

        if(choice == 1){
            create();
        }
        else if(choice == 2){
            display();
        }
        else if(choice == 3){
            printf("\nCount of total nodes is : %d\n" , count);
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
            printf("\nThank You!!!\n");
            break;
        }
        else{
            printf("\nPlease select correct choice\n");
        }
    }
}
