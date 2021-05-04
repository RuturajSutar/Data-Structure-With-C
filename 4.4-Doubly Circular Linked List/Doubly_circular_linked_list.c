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
int pos;
int count = 0;

void create(){
    char mych;
    while(true){
        printf("\nDo you want to insert node in doubly circular linked list(y/n) : \n");
        scanf(" %c" , &mych);
        if(mych == 'y'){
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data to insert into double circular linked list : \n");
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
            newnode->next = head;
            head->prev = newnode;
            count++;
        }
        else{
            break;
        }
    }
}

void display(){
    current = head;
    while(current->next != head){
        printf("%d\t" , current->data);
        current = current->next;
    }
    printf("%d" , current->data);
    printf("\n");
}

void insertFirst(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert at beginning : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->next = head;
    newnode->prev = head->prev;
    head->prev = newnode;
    head = newnode;
    tail->next = head;
    count++;
    printf("\nData is inserted at beginning successfully.\n");
}

void insertLast(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert at end : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->next = tail->next;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
    head->prev = tail;
    count++;
    printf("\nData is inserted at end successfully.\n");
}

void insertAfter(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter position after which you want to insert the data : \n");
    scanf("%d" , &pos);
    printf("\nEnter data to insert after given position : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    int i = 1;
    current = head;
    while(i < pos){
        current = current->next;
        i++;
    }
    newnode->next = current->next;
    newnode->prev = current;
    current->next = newnode;
    newnode->next->prev = newnode;
    count++;
    printf("\nData is inserted after given position successfully.\n");
}

void insertBefore(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter position at or before which you want to insert data : \n");
    scanf("%d" , &pos);
    printf("\nEnter data to insert before given position : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    int i = 1;
    current = head;
    while(i < (pos-1)){
        current = current->next;
        i++;
    }
    newnode->next = current->next;
    newnode->prev = current;
    current->next = newnode;
    newnode->next->prev = newnode;
    count++;
    printf("\nData is inserted before given position successfully.\n");
}

void deleteFirst(){
    current = head;
    head = current->next;
    head->prev = current->prev;
    tail->next = head;
    free(current);
    count--;
    printf("\nFirst element is deleted successfully.\n");
}

void deleteEnd(){
    current = tail;
    tail = current->prev;
    tail->next = current->next;
    head->prev = tail;
    free(current);
    count--;
    printf("\nLast element is deleted successfully.\n");
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
    current->next->prev = current->prev;
    current->prev->next = current->next;
    free(current);
    count--;
    printf("\nData at given position is deleted successfully.\n");
}

void reverse(){
    current = head;
    nextnode = head;
    while(nextnode->next != head){
        nextnode = nextnode->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current->next = current->prev;
    current->prev = head;
    current = head;
    head = tail;
    tail = current;
    printf("\nDoubly circular linked list is successfully reversed.\n");
}

int main(){
    int choice;
    while(true){
        printf("\n\nSelect any one choice from the below choices : \n\n");
        printf("Create Doubly Circular Linked List : 1 \n");
        printf("Display : 2 \n");
        printf("Count : 3 \n");
        printf("Insert at beginning : 4 \n");
        printf("Insert at end : 5 \n");
        printf("Insert after specific position : 6 \n");
        printf("Insert at or before specific position : 7\n");
        printf("Delete first : 8 \n");
        printf("Delete Last : 9 \n");
        printf("Delete specific position node : 10 \n");
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
            printf("\nNumber of nodes in doubly circular linked list(count) is : %d\n" , count);
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
            deleteEnd();
        }
        else if(choice == 10){
            deletePos();
        }
        else if(choice == 11){
            reverse();
        }
        else if(choice == 100){
            printf("\n\nThank You!!!!!\n\n");
            break;
        }
        else{
            printf("\nPlease enter correct choice.\n");
        }
    }
}
