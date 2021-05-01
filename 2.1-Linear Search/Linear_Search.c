#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d array elements : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    int data;
    printf("Enter data to search : \n");
    scanf("%d" , &data);
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        if(data == a[i]){
            printf("Data %d is present at index %d\n" , data , i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Data is not present in array\n");
    }
    return 0;
}
