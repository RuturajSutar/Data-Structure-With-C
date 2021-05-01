#include <stdio.h>

int main(){
    int a[3];
    printf("Enter 3 elements : \n");
    int *p;
    p = a;
    printf("Scanning the values :\n");
    for(int i = 0 ; i < 3 ; i++){
        //scanf("%d" , &a[i]);
        //scanf("%d" , &i[a]);
        //scanf("%d" , a+i);
        //scanf("%d" , i+a);
        //scanf("%d" , &p[i]);
        //scanf("%d" , &i[p]);
        //scanf("%d" , p+i);
        scanf("%d" , i+p);

        //All above ways are used to scan elements for array
    }
    printf("Printing the values :\n");
    for(int i = 0 ; i < 3 ; i++){
        //printf("%d\t" , a[i]);
        //printf("%d\t" , i[a]);
        //printf("%d\t" , *(a+i));
        //printf("%d\t" , *(i+a));
        //printf("%d\t" , p[i]);
        //printf("%d\t" , i[p]);
        //printf("%d\t" , *(p+i));
        printf("%d\t" , *(i+p));

        //All above ways are used to print elements of array
    }
    return 0;
}

