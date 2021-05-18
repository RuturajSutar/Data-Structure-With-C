#include <stdio.h>
#include <stdbool.h>

int top = -1;
int data;

void push(int stack[] , int n){
    if(top == (n-1)){
        printf("\nStack is full. You cannot push into stack.(Overflow)\n");
    }
    else{
        top++;
        printf("\nEnter data to push : \n");
        scanf("%d" , &stack[top]);
        printf("\nData is successfully pushed.\n");
    }
}

void pop(int stack[]){
    if(top == -1){
        printf("\nStack is already empty.(Underflow)\n");
    }
    else{
        data = stack[top];
        top--;
        printf("\nData %d is successfully popped.\n" , data);
    }
}

void peek(int stack[]){
    if(top == -1){
        printf("\nList is empty. (Underflow)\n");
    }
    else{
        data = stack[top];
        printf("\nTop most element in stack in %d.\n" , data);
    }
}

void display(int stack[]){
    if(top == -1){
        printf("\nList is empty. (Underflow)\n");
    }
    else{
        for(int i = top ; i >= 0 ; i--){
            printf("\t%d\n" , stack[i]);
        }
    }
}

int main(){
    int n;
    printf("Enter number of total elements : \n");
    scanf("%d" , &n);
    int stack[n];
    int choice;
    while(true){
        printf("\n\nSelect any one choice : \n\n");
        printf("Push : 1\n");
        printf("Pop : 2\n");
        printf("Peek : 3\n");
        printf("Display : 4\n");
        printf("Quit : 100\n");
        printf("\nEnter your choice : \n");
        scanf("%d" , &choice);
        if(choice == 1){
            push(stack , n);
        }
        else if(choice == 2){
            pop(stack);
        }
        else if(choice == 3){
            peek(stack);
        }
        else if(choice == 4){
            display(stack);
        }
        else if(choice == 100){
            printf("\nThank you!!!\n");
            break;
        }
        else{
            printf("\nPlease enter correct choice.\n");
        }
    }
    return 0;
}
