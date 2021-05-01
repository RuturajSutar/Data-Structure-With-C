#include <stdio.h>

int check(int a[] , int l , int r , int data){
    int mid = (l + r)/2;
    if(l > r){
        return -1;
    }
    else if(data == a[mid]){
        return mid;
    }
    else if(data > a[mid]){
        l = mid + 1;
        check(a,l,r,data);
    }
    else{
        r = mid - 1;
        check(a,l,r,data);
    }
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
    int l = 0;
    int r = n - 1;
    int result = check(a , l , r , data);
    if(result == -1){
        printf("Data %d is not present in array.\n" , data);
    }
    else{
        printf("Data %d is present at index %d." , data , result);
    }
    return 0;
}

