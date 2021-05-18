#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;
struct node *newnode = NULL;
struct node *current = NULL;
int data;

void push(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to push : \n");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    if(top == NULL){
        top = newnode;
    }
    else{
        newnode->next = top;
        top = newnode;
    }
    printf("\nData is pushed successfully.\n");
}

void pop(){
    if(top == NULL){
        printf("\nStack is empty. (Underflow)\n");
    }
    else{
        data = top->data;
        current = top;
        top = current->next;
        free(current);
        printf("\nData %d is popped successfully.\n" , data);
    }
}

void peek(){
    if(top == NULL){
        printf("\nStack is empty. (Underflow)\n");
    }
    else{
        data = top->data;
        printf("\nData %d is at topmost position in stack.\n" , data);
    }
}

void display(){
    current = top;
    while(current != NULL){
        printf("\t%d\n" , current->data);
        current = current->next;
    }
}

int main(){
    int choice;
    while(true){
        printf("\n\nSelect any one choice from below : \n\n");
        printf("Push : 1\n");
        printf("Pop : 2\n");
        printf("Peek : 3\n");
        printf("Display : 4\n");
        printf("Quit : 100\n");
        printf("\nEnter your choice : \n");
        scanf("%d" , &choice);
        if(choice == 1){
            push();
        }
        else if(choice == 2){
            pop();
        }
        else if(choice == 3){
            peek();
        }
        else if(choice == 4){
            display();
        }
        else if(choice == 100){
            printf("\nThank You!!!!\n");
            break;
        }
        else{
            printf("\nPlease enter correct choice.\n");
        }
    }
    return 0;
}
