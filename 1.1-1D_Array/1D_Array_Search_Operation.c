#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d elements : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("Original Array : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    int data;
    printf("\nEnter data to search : \n");
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
        printf("Data %d is not present in array \n" , data);
    }
    return 0;
}

