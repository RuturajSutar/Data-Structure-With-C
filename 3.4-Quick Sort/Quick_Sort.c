#include <stdio.h>

int partition(int a[] , int lb , int ub , int n){
    int pivot = lb;
    int start = lb;
    int end = ub;
    int temp;
    while(start < end){
        while(a[start] <= a[pivot]){
            start++;
            if(start > (n-1)){
                break;
            }
        }
        while(a[end] > a[pivot]){
            end--;
        }
        if(start < end){
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    temp = a[pivot];
    a[pivot] = a[end];
    a[end] = temp;
    return end;
}

int *QuickSort(int a[] , int lb , int ub , int n){
    int loc;
    if(lb < ub){
        loc = partition(a,lb,ub,n);
        QuickSort(a,lb,loc-1,n);
        QuickSort(a,loc+1,ub,n);
    }
    return a;
}

int main(){
    int n;
    printf("Enter number of elements : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d numbers : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("\nOriginal Array : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    printf("\n");
    int lb = 0;
    int ub = n-1;
    int *arr = QuickSort(a,lb,ub,n);
    printf("\n\nArray after quick sorting is : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , arr[i]);
    }
    return 0;
}
