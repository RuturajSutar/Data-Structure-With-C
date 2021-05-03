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
struct node *tail = NULL;
struct node *prev = NULL;
struct node *nextnode = NULL;
int pos;
int count = 0;

void create(){
    char mychoice;
    while(true){
        printf("\nDo you want to insert node in circular linked list(y/n) : \n");
        scanf(" %c" , &mychoice);
        if(mychoice == 'y'){
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data for the node : \n");
            scanf("%d" , &newnode->data);
            newnode->next = NULL;
            if(tail == NULL){
                tail = newnode;
                tail->next = tail;
            }
            else{
                newnode->next = tail->next;
                tail->next = newnode;
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
    current = tail->next;
    while(current->next != tail->next){
        printf("%d\t" , current->data);
        current = current->next;
    }
    printf("%d" , current->data);
}

void insertFirst(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert at beginning : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->next = tail->next;
    tail->next = newnode;
    printf("\nData is inserted at beginning successfully.\n");
    count++;
}

void insertLast(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to insert at end : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->next = tail->next;
    tail->next = newnode;
    tail = newnode;
    printf("\nData is inserted at end successfully.\n");
    count++;
}

void insertAfter(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter position after which you want to insert the data : \n");
    scanf("%d" , &pos);
    printf("\nEnter data to insert after specific position : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    int i = 1;
    current = tail->next;
    while(i < pos){
        current = current->next;
        i++;
    }
    newnode->next = current->next;
    current->next = newnode;
    printf("\nData is inserted after given position.\n");
    count++;
}

void insertBefore(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter position at which or before which you want to insert data : \n");
    scanf("%d" , &pos);
    printf("\nEnter data to insert before given position : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    int i = 1;
    current = tail->next;
    while(i < (pos-1)){
        current = current->next;
        i++;
    }
    newnode->next = current->next;
    current->next = newnode;
    printf("\nData is inserted before given position successfully.\n");
    count++;
}

void deleteFirst(){
    current = tail->next;
    tail->next = current->next;
    free(current);
    printf("\nFirst element is successfully deleted.\n");
    count--;
}

void deleteLast(){
    current = tail;
    tail = tail->next;
    while(tail->next != current){
        tail = tail->next;
    }
    tail->next = current->next;
    free(current);
    printf("\nLast element is deleted successfully.\n");
    count--;
}

void deletePos(){
    printf("\nEnter position which you want to delete : \n");
    scanf("%d" , &pos);
    current = tail->next;
    int i = 1;
    while(i < pos){
        prev = current;
        current = current->next;
        i++;
    }
    prev->next = current->next;
    free(current);
    printf("\nNode at given position is deleted successfully.\n");
    count--;
}

void reverse(){
    prev = tail;
    current = tail->next;
    nextnode = tail->next;
    while(nextnode->next != tail->next){
        nextnode = nextnode->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    nextnode = nextnode->next;
    current->next = prev;
    tail = nextnode;
    printf("\nCircular linked list reversed successfully.\n");
}

int main(){
    int choice;
    while(true){
        printf("\n\nSelect any one choice from below choices : \n\n");
        printf("Create circular linked list : 1 \n");
        printf("Display : 2 \n");
        printf("Count : 3 \n");
        printf("Insert at beginning : 4 \n");
        printf("Insert at end : 5 \n");
        printf("Insert after specific position : 6 \n");
        printf("Insert before specific position : 7 \n");
        printf("Delete first : 8 \n");
        printf("Delete last : 9 \n");
        printf("Delete specific position : 10 \n");
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
            printf("\n\nNumber of nodes in circular linked list is (count) : %d\n" , count);
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
            printf("\n\nThank You!!!!\n\n");
            break;
        }
        else{
            printf("\n\nPlease select correct choice.\n\n");
        }
    }
}
