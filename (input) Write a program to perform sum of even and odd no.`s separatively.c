//title of program
//program to perform sum of even and odd no.`s separatively
//haeder file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration
int n;
//input statement from user
printf("Enter the size of the array");
scanf("%d",&n);
//variable declaration and assignment of values
int a[n],sum=0,sum1=0;
//input statement from user
printf("Enter array elements");
//for loop statement
for(int i=0;i<n;i++)
{
//statement for storing values
scanf("%d",&a[i]);
//if else statement
if(a[i]%2==0)
//statement for calculating sum of even and odd no.`s(if part)
sum=sum+a[i];
else
//statement for calculating sum of even and odd no.`s(else part)
sum1=sum1+a[i];
}
//output statements
printf("Sum of even array elements=%d\n",sum);
printf("Sum of odd array elements=%d\n",sum1);
}