// #include <stdio.h>

// int main() {
//     printf("Hello World!\n");
//     return 0;
// }
// 🚨//this is called c boiler code


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>

// int main () {
//     int a = 18; //this stores 18 as a const in the variable 'a'
//     printf("%i is the users age\n", a); 
//     float b = 0.1;
//     printf("%f is the starting age\n", b);
//     char c = 'D';
//     printf("%c is users first letter of lastname\n", c);
//     char d[] = "om";
//     printf("%s is users first name\n", d);
//     int x;
//     x=200;
//     printf("%i is the maxm age",x);
//     return 0;
// /*this is a multiline cmt*/
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>
// int main () {
//     printf("type a number as an input\n");
//     int a;
//     scanf("%i", &a);
//     printf("the input is %i",a);
//     return 0;
      
// }


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>
// int main(){
    
//     int age;
//     printf("enter your age \n");
//     scanf("%i", &age);
//     if (age>=18){
//         printf("you can drive");
//     }
//     else
//     {
//         printf("you cant drive");
//     }
    
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// // 🚨ifelse statement

// #include <stdio.h>
// int main(){
//     int input;
//     printf("enter a number : ");
//     scanf("%d", &input);

//     if(input>0){
//         printf("the input is a positive number!");
//     }
//     else if(input<0){
//         printf("the input is a negative number!");
//     }
//     else if (input==0){
//         printf("input is zero");
//     }
//     // else{                                                       [[wrong because input already acceptable as integer]]
//     //     printf("enter a INTEGER NUMBER only!!!");
//     // }

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// //🚨switch

// #include <stdio.h>
// int main(){
//     int day;
//     printf("enter a number (1-7): ");
//     scanf("%d", &day);
//     switch(day){
//         case 1:
//             printf("monday\n");
//             break;

//         case 2:
//             printf("tuesday\n");
//             break;

//         case 3:
//             printf("wednesday\n");
//             break;

//         case 4:
//             printf("thursday\n");
//             break;

//         case 5:
//             printf("friday\n");
//             break;

//         case 6:
//             printf("saturday\n");
//             break;

//          case 7:
//             printf("sunday\n");
//             break;
//         default:
//            printf("ERROR ,invalid input!");           

//     }
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>
// int main(){
//     int i = 0;
//     while(i<5){
//         printf("HAPPY BIRTHDAY!\n");
//         i = i + 1;
//     }

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// infinite loops

// #include<stdio.h>
// int main(){
//     int a = 0;
//     while(a<1){ /*universal true statement as 0 is less than 1*/
//         printf("this is infinite loop!!\n");
//     }

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// /*Write a program that takes an integer input from the user and calculates the sum of its digits using a while loop.*/

// #include <stdio.h>
// int main(){
//     printf("Enter a integer: \n");
//     int a, sum = 0;
//     scanf("%d",&a);
//     while(a!=0){
//         sum = sum + (a%10);
//         a = a/10;
//     }
//     printf("sum of digits of input is : \n%d",sum);


//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 /*[q]write a program to print the input integer in reverse*/
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* [q]write a program to find product of digits of integer*/

// #include<stdio.h>
// int main(){
//     int a,b,multi=1;
//     printf("enter a number to know product of its integer \n");
//     scanf("%d",&a);
//     while(a!=0 ){
//         b = a%10;
//         a = a/10;
//         multi = multi * b ;
        
//     }
//     printf("%d",multi);

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*[q] write a program to print first n natural no.s using do while loop*/

// #include<stdio.h>
// int main(){
//     int a, i=1 ;
//     printf(" write a number : \n");
//     scanf("%d", &a);
//     do{ 
//         printf("%d\n",i);
//         i++;
   
//     } while (i<=a);
    
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include <stdio.h>

// int main() {
//     int i;
//     for(i = 1; i <= 100; i++) {
//         printf("%d ", i);
//     }
//     return 0;
// }   


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// /*[q]to find a number is prime or not*/


// #include <stdio.h>

// int main() {
//     int a, i = 2, isPrime = 1; 

//     printf("Enter a number: ");
//     scanf("%d", &a);  

//     if (a <= 1) {
//         printf("%d is not a prime number\n", a);
//         return 0;  
//     }

//     while (i <= a / 2) { 
//         if (a % i == 0) {
//             isPrime = 0; 
//             break;
//         }
//         i++; 
//     }

//     if (isPrime)
//         printf("%d is a prime number\n", a);
//     else
//         printf("%d is not a prime number\n", a);

//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// /*to print number from 0 to n using for while loop*/

// #include<stdio.h>
// int main(){
//     int a;
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     for(a = 0; a<=n; a++){ // for(initialisation, conditon, increment or decrement)
//         printf("%d \n",a);

//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// /*program to print ‘n’ natural numbers in reverse order.*/

// #include<stdio.h>
// int main(){
//     int input;
//     printf("enter a number : \t");
//     scanf("%d",&input);
//     for(int a = 0; a<=input; input--){   //for(initialsation;condition;increment or decrement)
//         printf("%d \n",input);
//     }


//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 10; i++) {
        if(i == 5)
            break;
        printf("%d\n", i);
    }
    return 0;
}



