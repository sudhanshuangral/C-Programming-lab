//program to print the maximum number in the given array.
#include<stdio.h>
void main()
{
int arr[]={35,91,77,125,68};
int length=sizeof(arr)/sizeof(arr[0]);
int max=arr[0];
for(int i=0;i<length;i++)
{
if(arr[i]>max)
max=arr[i];
}
printf("Largest element present in given array:%d\n",max);
}


OUTPUT:-
Largest element present in given array:125.
