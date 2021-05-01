#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};


    int b = 2;
    int *q;
    q = &b;
    printf("%d\n" , q);//Print the address of the variable b
    printf("%d\n" , *q);//Print the value of the variable b


    int *p;
    p = a;
    printf("%d\n" , a);//print the base address of arr i. e. address of 1
    printf("%d\n" , p);//print the base address of arr i. e. address of 1
    printf("%d\n" , a+1);//print the address of 2
    printf("%d\n" , a+2);//print the address of 3
    printf("%d\n" , p+1);//print the address of 2
    printf("%d\n" , p+2);//print the address of 3
    printf("%d\n" , *(a+1));//print 2
    printf("%d\n" , *(a+2));//print 3
    printf("%d\n" , *(p+1));//print 2
    printf("%d\n" , *(p+2));//print 3
    printf("%d\n" , &a+1);//prints address of 9 + 4(size of int)
    printf("%d\n" , &a[0]+1);//prints address of 2
    return 0;
}
