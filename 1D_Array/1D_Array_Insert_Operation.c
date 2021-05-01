#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements : \n");
    scanf("%d" , &n);
    int a[n+1];
    printf("Enter %d elements : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("Original Array : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    int pos,data;
    printf("\nEnter index at which you want to insert : \n");
    scanf("%d" , &pos);
    printf("Enter data to insert : \n");
    scanf("%d" , &data);
    for(int i = (n-1) ; i >= pos ; i--){
        a[i+1] = a[i];
    }
    a[pos] = data;
    printf("Array after insertion :\n");
    for(int i = 0 ;  i < (n+1) ; i++){
        printf("%d\t" , a[i]);
    }
    return 0;
}
