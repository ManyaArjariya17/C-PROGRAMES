//C program to swap two numbers USING 3RD VARIABLE 
#include <stdio.h> 
int main()
{
int var1, var2, temp; 
printf("Enter two integers");
scanf("%d%d", &var1, &var2);
printf("Before Swapping First variable = %d\n Second variable = %d\n", var1, var2);
temp = var1;
var1 = var2;
var2 = temp;
printf("After SwappingnFirst variable = %d\nSecond variable = %d\n", var1, var2);
return 0;
}
