//title of program
//program to find the sum of first 10 natural numbers
//hedear file
#include<stdio.h>
//function headimg
int main()
{
//variable declaration and assignment of values
int j, sum=0;
//output statement
printf("The sum of first 10 natural numbers is=\n");
//for loop statement
for(j=1; j<=10;j++)
{
//output statement (sum)
sum=sum+j;
printf("%d",j);
}
//output statement
printf("\nThe sum is=%d\n ",sum);
}