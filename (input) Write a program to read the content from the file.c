//title of program
//program to read the content from the file
//header file
#include<stdio.h>
//header file for including functions which are used below in program code which is called as standard library 
#include<stdlib.h>
//main function heading
void main()
{
// here 'FILE' is the datatype to create the file pointer and '*fp' id the file pointer variable which we are creating 
FILE*fp;
//file opening statement and where'Demo,java' is the file name and'r' is the access of read mode 
fp=fopen("D:\\Demo,java","r");
//if statement to check whether that file is null or not
if(fp==NULL)
//output statement(if part)
printf("No file to open");
//else statememt
else{
//output statement(else part)
printf("Content of the file");
//do while loop statement
do
{
// takes the first character from the file pointer
char ch;
//assignment of value (getting character variable from file)
ch=fgetc(fp);
//output statememt
printf("%c",ch);
}
while(fp!=EOF);
//file closing statement
fclose(fp);
}
}