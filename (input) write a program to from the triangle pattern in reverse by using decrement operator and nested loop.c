//title of program
//program to print the triangle pattern in reverse  
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration
int i,j;
//nested loop statement
for(i=0;i<=5;i++)
{
for (j=5;j>=i;j--)
{
//output statement
printf("%d",i);
}
printf("\n");
}
}
