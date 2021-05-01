#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d numbers : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("\n\nOriginal array is : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    printf("\n\n");
    int min,temp;
    for(int i = 0 ; i < (n-1) ; i++){
        min = i;
        for(int j = i+1 ; j < n ; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("Array after selection sorting : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    return 0;
}
