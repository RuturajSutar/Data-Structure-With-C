#include <stdio.h>

int check(int a[] , int n , int data){
    int l = 0;
    int r = n-1;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(data == a[mid]){
            return mid;
        }
        else if(data < a[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter total count : \n");
    scanf("%d" , &n);
    int a[n];
    printf("Enter %d elements : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    int data;
    printf("Enter data to search : \n");
    scanf("%d" , &data);
    int result = check(a,n,data);
    if(result == -1){
        printf("data %d is not present in array \n" , data);
    }
    else{
        printf("Data %d is present at index %d" , data , result);
    }
    return 0;
}
