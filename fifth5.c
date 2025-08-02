// #include <stdio.h>
// int main(){
//     int i = 0;
//     while(i<5){
//         printf("HAPPY BIRTHDAY!\n");
//         i = i + 1;
//     }

//     return 0;
// }





// infinite loops

// #include<stdio.h>
// int main(){
//     int a = 0;
//     while(a<1){ /*universal true statement as 0 is less than 1*/
//         printf("this is infinite loop!!\n");
//     }

//     return 0;
// }



// /*[q]Write a program to print natural numbers from 10 to 20 when initial loop
// counter is initialized to 0*/

// #include <stdio.h>
// int main(){
//     int num=0;              
//     while(num<=20){                         //number max limit 20
//         if(num>=10){                       //if num greater or equal to 10 then print the num
//              printf("%d\n",num);          //then close if statement
//         }                                //then num redefined as num=num+1
//         num = num +1;
// } 
//     return 0;
// }


// /*[q]Write a C program using a while loop to print all even numbers from 1 to 50.*/

// #include <stdio.h>
// int main(){
//     int i = 2;
//     while(i<=50){
//         printf("%d\n",i);
//         i = i+2;
//     }

//     return 0;
// }

/*Write a program that takes an integer input from the user and calculates the sum of its digits using a while loop.*/

#include <stdio.h>
int main(){
    printf("Enter a integer: \n");
    int a, sum = 0;
    scanf("%d",&a);
    while(a!=0){
        sum = sum + (a%10);
        a = a/10;
    }
    printf("sum of digits of input is : \n%d",sum);


    return 0;
}
