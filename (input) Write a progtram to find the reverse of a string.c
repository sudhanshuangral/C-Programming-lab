//title of program
//program to print the reverse of string
//header files
#include<stdio.h>
#include<string.h>
 //main function heading
int main() 
{
    //character(array) declaration
    char str[20];
    //input statement from user
    printf("Enter String: ");
    //for getting input purpose
    gets(str);
    //output statement
    printf("Entered string is: %s\n",str);
    //statement for printing reverse of a  string
    int start=0,end=strlen(str)-1;
    // while loop statement
    while(start<end)
    {
        //Swapping characters at start and end
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
 //Incrementing start and decrementing end
        start++;
        end--;
    }
    //output statement 
    printf("Reversed string is: %s",str);
 //return statement
    return 0;
}