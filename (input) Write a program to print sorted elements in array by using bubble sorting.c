//title of program
//program to print sorted elements in array by using bubble sorting
//header file
#include<stdio.h>
//main function
void main()
{
//variable declaration
int n;
//input statement from user
printf("Enter the size of the array");
scanf("%d",&n);
//variable(array) declaration
int a[n],i;
//input statement from user
printf("Enter the array elements");
//for loop statement
for(i=0;i<n;i++)
//statement for storing values
scanf("%d",&a[i]);
//initializing variable
int j;
//nested loop statement
for(i=0;i<n-1;i++)
{
//assignment of value
int k=0;
//nested loop statement
for(j=k+1;j<n-i;j++)
{
//if statement for bubble sorting
if(a[k]>a[j])
{
//assignment of values
int t=a[j];
a[j]=a[k];
a[k]=t;
}
//increment statement for k
k++;
}
}
//output statement
printf("The sorted array elements are:\n");
//for loop statement
for(i=0;i<n;i++)
//output statement
printf("%d\n",a[i]);
}