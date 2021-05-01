#include <stdio.h>

int check(int a[] , int data , int n){
    for(int i = 0 ; i < n ; i++){
        if(data == a[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter number of data : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d array elements : \n",n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    int data;
    printf("Enter data to search : \n");
    scanf("%d" , &data);
    int result = check(a , data , n);
    if(result == -1){
        printf("Data %d is not present in array\n" , data);
    }
    else{
        printf("Data %d is present at index %d" , data , result);
    }
    return 0;
}
