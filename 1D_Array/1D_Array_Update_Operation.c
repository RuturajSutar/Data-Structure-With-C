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
    int pos,data;
    printf("\nEnter index at which you want to update : \n");
    scanf("%d" , &pos);
    printf("Enter data to update : \n");
    scanf("%d" , &data);
    a[pos] = data;
    printf("\nArray after updation : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    return 0;
}

