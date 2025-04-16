#include<stdio.h>
int main()
{
    FILE *fptr;
    // open the file in writing mode
    fptr=fopen("C:\\Users\\MITHUN K\\OneDrive\\Desktop\\file\\1.txt","a");//append

    // store the content of the file
    char myString[100];

    //read the content and store it inside myString
    fgets(myString, 100, fptr);

    //print the file content
    printf("%s",myString)

    // to write a program
    fprintf(fptr,"we are legion, we never forget, we never forgive");

    //close the file
    fclose(fptr);
}

