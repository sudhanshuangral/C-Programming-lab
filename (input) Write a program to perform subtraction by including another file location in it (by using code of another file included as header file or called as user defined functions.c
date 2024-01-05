//title of program
//program to perform subtraction by using another file location
//header file
#include<stdio.h>
//header file for the location of another file ---->included to perform subtraction operation
#include"addsubfun.c"
//main function heading
void main()
{
//variable declaration
int a,b,c;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&a,&b);
//function calling for performing subtraction and addition
c=sub(a,b);
//output statement for subtraction
printf("Sub=%d",c);
}