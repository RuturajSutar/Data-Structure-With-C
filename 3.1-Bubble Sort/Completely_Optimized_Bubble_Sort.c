#include <stdio.h>

int main(){
    int n;
    printf("Enter Number of Element : \n");
    scanf("%d",&n);
    printf("\n\n");
    int a[n];
    printf("Enter %d Elements : \n" , n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i = 0 ; i < (n-1) ; i++){
        int flag = 0;
        for(int j = 0 ; j <((n-1)-i) ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
    printf("\nAfter Sorting Array Becomes : \n\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

