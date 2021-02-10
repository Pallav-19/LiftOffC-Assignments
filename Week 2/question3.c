#include<stdio.h>
#include<string.h>
int main()
{
    char word[50];

    printf("enter any word upto 50 letters \n");
    scanf("%s",&word);
    printf(" The length of the word entered is :  %d" , strlen(word));
    return 0;
}