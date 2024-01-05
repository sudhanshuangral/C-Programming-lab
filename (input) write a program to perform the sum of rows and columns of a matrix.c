//title of program
//program to perform sum of rows and columns of a matrix
//header file
#include<stdio.h>
//main function heading
void main()
{
//array(variable) declaration and assignment of values
int i,j,mat[10][10],size=3,sR=0,sC=0;
//nested loop statement
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
//input statement from user
printf("Enter the element mat[%d][%d]",i,j);
scanf("%d",&mat[i][j]);
}
}
//nested loop statement
for(i=0;i<size;i++)
{
//assignment of value
sR=sC=0;
//for loop statement
for(j=0;j<size;j++)
{
//statements for performing sum of rows and columns
sR=sR+mat[i][j];
sC=sC+mat[j][i];
}
//output statement
printf("%d:sR=%dand %d:sC=%d\n",i,sR,i,sC);
}
//nested loop statement
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
//output statements
printf("%d",mat[i][j]);
}
printf("\n");
}
}