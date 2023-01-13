//C program to print all even numbers AND sum of it from 1 to n
#include <stdio.h>  
int main()  
{  
    int i, n, sum=0;  
    printf("Enter any number: ");  
    scanf("%d", &n);  
    for(i=2; i<=n; i+=2)  
    {  
        sum += i;  
    }  
    printf("Sum of all even numbers from 1 to %d: %d", n, sum);  
    return 0;  
}  1

