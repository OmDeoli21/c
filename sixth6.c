// /*write a program to print the input integer in reverse*/
// #include<stdio.h>
// int main(){
//     int a , b ;
//     printf("enter a integer to be printed in reverse : ");
//     scanf("%d",&a);
//     while(a!=0){
//         b = a%10;
//         a = a/10;
//          printf("%d",b);
        
//     }


//     return 0;
// }



/*write a program to find product of digits of integer*/

#include<stdio.h>
int main(){
    int a,b,multi=1;
    printf("enter a number to know product of its integer \n");
    scanf("%d",&a);
    while(a!=0 ){
        b = a%10;
        a = a/10;
        multi = multi * b ;
        
    }
    printf("%d",multi);

    return 0;
}