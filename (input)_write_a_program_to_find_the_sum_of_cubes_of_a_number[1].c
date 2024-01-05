//title of program
//program to find the sum of cube of a number
//header file
#include<stdio.h>
//main function heading
int main()
{
//variable declaration and assignment of value
int number,sum=0,digit,cube;
//input statement from user
printf("Enter a number");
scanf("%d",&number);
//calculate sum of cube of a number by using while loop statement
while(number!=0)
{
//get the last digit
digit=number%10;
//statement for calculation of cube of a number
cube=digit*digit*digit;
//add the digit to the sum
sum+=cube;
//remove the last digit from the no.
number/=10;
}
//output statement for the sum of cubes of a digit
printf("sum of cubes of digit is=%d\n",sum);
//return statement
return 0;
}