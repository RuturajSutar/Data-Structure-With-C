#include <stdio.h>

int main(){
    int a[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    int *p;
    p = a;
    //following lines of code prints the base address of array or we can say address of 1
    printf("%d\n" , a);
    printf("%d\n" , p);
    printf("%d\n" , &a);
    printf("%d\n" , *a);
    printf("%d\n" , a[0]);
    printf("%d\n" , &a[0]);
    printf("%d\n" , &a[0][0]);

    printf("\n\n\n");

    //following lines of code prints the address of 4 i.e. the base address of second 1-D array {4,5,6}
    printf("%d\n" , a[1]);
    printf("%d\n" , &a[1]);
    printf("%d\n" , &a[1][0]);
    printf("%d\n" , a+1);
    printf("%d\n" , *(a+1));

    printf("\n\n\n");

    printf("%d\n" , *(a+1));//prints address of 4
    printf("\n");
    printf("%d\n" , *(*(a+1)));//prints 4
    printf("\n");
    printf("%d\n" , *(a+1)+2);//prints address of 6
    printf("\n");
    printf("%d\n" , *(*(a+1)+2));//prints 6
    printf("\n");
    printf("%d\n" , *(a+2)+1);//prints address of 8
    printf("\n");
    printf("%d\n" , *(*(a+2)+1));//prints 8

    printf("\n\n\n");

    printf("%d\n" , **a);//prints 1
    printf("\n");
    printf("%d\n" , a[0]+1);//prints address of 2
    printf("\n");
    printf("%d\n" , &a[0]+1);//prints address of 4
    printf("\n");

    return 0;
}

