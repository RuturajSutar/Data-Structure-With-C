#include <stdio.h>

void merge(int a[] , int lb , int mid , int ub){
    int b[ub+1];
    int i = lb;
    int j = mid + 1;
    int k = lb;
    while(i <= mid && j <= ub){
        if(a[i] <= a[j]){
            b[k] = a[i];
            k++;
            i++;
        }
        else{
            b[k] = a[j];
            k++;
            j++;
        }
    }
    if(i > mid){
        while(j <= ub){
            b[k] = a[j];
            k++;
            j++;
        }
    }
    if(j > ub){
        while(i <= mid){
            b[k] = a[i];
            k++;
            i++;
        }
    }
    for(int i = lb ; i <= ub ; i++){
        a[i] = b[i];
    }
}

int *mergeSort(int a[] , int lb , int ub){
    int mid;
    if(lb < ub){
        mid = (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
    return a;
}

int main(){
    int n;
    printf("Enter total number of elements : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d numbers : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("\n\n");
    printf("Original array is : \n\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , a[i]);
    }
    int lb = 0;
    int ub = n-1;
    int *arr = mergeSort(a,lb,ub);
    printf("\n\nArray after merge sorting : \n\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t" , arr[i]);
    }
    return 0;
}
