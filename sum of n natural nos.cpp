//C program to print all natural numbers AND sum of it from 1 to n.
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}


