#include <stdio.h>

int main(){
    int n;
    printf("Enter count of numbers : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d elements : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("\nOriginal array is : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    int temp,j;
    for(int i = 1 ; i < n ; i++){
        temp = a[i];
        j = i-1;
        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    printf("\nArray after sorting :\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    return 0;
}
