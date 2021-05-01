#include <stdio.h>

int main(){
    int a[3][3];
    printf("Enter values for 3 by 3 matrix :\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    printf("Printing 3 by 3 matrix :\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\t" , a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

