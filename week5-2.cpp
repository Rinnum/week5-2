#include <stdio.h>
int isPrime(int);
int main() {
    int x;
    printf("Enter numbers : ");
    scanf("%d", &x);
    if (isPrime(x) == 1)
        printf("Prime number");
    else
        printf("Not Prime number");
    return 0;
}
int isPrime(int a) 
{
    int i;
    for (i = 1; i<a ; i++);
     {
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) && (i!=2 && i!=3 && i!=5 && i!=7))
        return 0;
        else 
        return 1;
    }
}
