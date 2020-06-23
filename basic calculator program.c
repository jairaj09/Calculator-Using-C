#include <stdio.h>


int main()
{
    int a , b , c , d , e , f , g;

    printf("First number is = ");
    scanf("%d" ,&a);
    printf("Second number is = ");
    scanf("%d" , &b);
    c = a+b ;
     printf("sum = %d \n " , c);
     d = a-b ;
     printf("Differnce = %d \n", d);
     e = a*b ;
     printf("product = %d \n", e);
     f = a/b;
     printf("Division = %d \n" , f);
     g = a%b ;
     printf("Remainder after division = %d \n" , g);
     return 0;
}
