/*write a program to print the input integer in reverse*/
#include<stdio.h>
int main(){
    int a , b ;
    printf("enter a integer to be printed in reverse : ");
    scanf("%d",&a);
    while(a!=0){
        b = a%10;
        a = a/10;
         printf("%d",b);
        
    }


    return 0;
}