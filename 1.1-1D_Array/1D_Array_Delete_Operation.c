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
    int pos;
    printf("\nEnter index which you want to delete : \n");
    scanf("%d" , &pos);
    for(int i = pos ; i < n ; i++){
        a[i] = a[i+1];
    }
    printf("Array After Deletion :\n");
    for(int i = 0 ;  i < (n-1) ; i++){
        printf("%d\t" , a[i]);
    }
    return 0;
}
