/*Write a program to determine whether a character entered by the user is
lowercase or not*/

#include<stdio.h>
int main(){
    printf("type a charcter : \n");
    char input;
    scanf("%c", &input);

    if (input>='a' && input<='z'){
        printf("character is lowercase");
    }
    else if (input>='A' && input<='Z')
    {
        printf("Character is uppercase");
    }
    else{
        printf("ENTER A VALID INPUT!!");
    }

    return 0;
}