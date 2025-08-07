// /*{q1] write a code to calculate area of rectangle by given input*/

// #include <stdio.h>
// int main(){
//     int a = 10;
//     int b = 15;
//     printf("length of rectangle is %icm\n",a);
//     printf("breadth of rectangle is %icm\n\n",b);
//     printf("So the Area of rectangle is length * breadth , i.e = %icm", a*b);
//     return 0;

// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// //q2]code a program to find area of rectangle while asking input from user


// #include <stdio.h>
// int main(){
//     printf("enter the length of rectangle in cm \n");
//     int length;
//     scanf("%i", &length);
//     printf("enter the breadth of rectangle in cm \n");
//     int breadth;
//     scanf("%i", &breadth);
//     printf("the area of the rectangle is %i cm squared\t", length*breadth);
    
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// /*q2]calculate area of circle also volm of cylinder*/

// #include <stdio.h>
// int main(){
//     int a;
//     printf("type the radius of circle\n ");
//     scanf("%i",&a);
//     printf("the area of circle is  %f\n\n\n", 3.14*a*a);
  
    
// //now for volm of cylinder
//     int r,h;
//     printf("\ntype the radius of cylinder\n");
//     scanf("%i",&r);
//     printf("type the height of cylinder\n");
//     scanf("%i",&h);
//     printf("the volume of given cylinder is %f",3.14*r*r*h );

//    return 0;
//}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// //q3] write a code to convert celsius to farenheit
// #include <stdio.h>
// int main(){
//     int tc;
//     printf("type temperature in degree celsius\n\n");
//     scanf("%f",&tc);
//     printf("the temperature in degree farenheit is %f", tc*1.8+32);

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// //q4]calculate simple intrest 
// //formula for simple intrest= P*R*T/100
// #include <stdio.h>
// int main(){
//     int p = 1000, r = 8, t = 5;
//     printf("the intrest to be paid for %d rupees,%d percent rate and %d years will be %d", p, r, t, (p*r*t)/100);

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// //write a program to check whether a number is divisible by 97 or not
// #include <stdio.h>
// int main (){
//     int input;
//     printf("type a number to check whether it is divisible by 97 or not \n");
//     scanf("%i",&input);
//     printf("remainder %d",input%97);
//    // printf("remainder %d",97%input); {wrong}

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// /*Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user*/

// #include <stdio.h>
// int main(){
//     int p;
//     printf("enter your Physics marks\n");
//     scanf("%d", &p);
      
//     int c;
//     printf("enter your Chemistry marks\n");
//     scanf("%d", &c);

//     int m;
//     printf("enter your Mathematics marks\n");
//     scanf("%d", &m);

//     int z = (p+c+m)/3 ;

//     if(p>=33 && c>=33 && m>=33 && z>=40){
//         printf("You passed!!");

//     }
//     else{
//         printf("You failed!");
//     }


//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//codewithharry practice set 3 q2

// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user


// #include <stdio.h>
// int main(){
//     float income;
//     printf("Type your income:  \n");
//     scanf("%f", &income);

//     if(income<250000){
//         printf("NO TAX!!");
//     }
//     if(income>250000 && income<500000){
//         printf("Tax to be paid by you : %.1f", income/20);
//     }
//      if(income>500000 && income<1000000){
//         printf("Tax to be paid by you : %.1f", income/5);
//     }
//     else
//     {
//         printf("tax to be paid by you : %.1f", income*0.3);
//     }

//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//codewithharry problemset3 q4
//find a leap year


// #include <stdio.h>
// int main(){
//     printf("enter a year: \n");
//     int year;
//     scanf("%d", &year);

//     if((year%4==0 && year%100 !=0) || year%400==0  ){
//         printf("this is a leap year !");

//     }
//     else{
//         printf("not a leap year");
//     }

//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




// //Write a program to find greatest of four numbers entered by the user.

// #include <stdio.h>
// int main(){
//     printf("Enter four numbers:\n");
//     int a,b,c,d ;
//     scanf("%d %d %d %d", &a,&b,&c,&d);

//     if(a>b && a>c && a>d ){
//         printf("%d is the greatest number you entered",a);
//     }

//     if(b>a && b>c && b>d ){
//         printf("%d is the greatest number you entered",b);
//     }
//     if(c>b && c>a && c>d ){
//         printf("%d is the greatest number you entered",c);
//     }
//     if(d>b && d>c && d>a ){
//         printf("%d is the greatest number you entered",d);
//     }
//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// /*Write a program to determine whether a character entered by the user is
// lowercase or not*/

// #include<stdio.h>
// int main(){
//     printf("type a charcter : \n");
//     char input;
//     scanf("%c", &input);

//     if (input>='a' && input<='z'){
//         printf("character is lowercase");
//     }
//     else if (input>='A' && input<='Z')
//     {
//         printf("Character is uppercase");
//     }
//     else{
//         printf("ENTER A VALID INPUT!!");
//     }

//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*[q]10 to 20 number print*/

// #include <stdio.h>
// int main(){
//     int num=0;
//     while(num<=20){ 
//         if(num>=10){
//              printf("%d\n",num);      
//         }
//         num = num +1;
// } 
//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// /*[q]Write a program to calculate factorial of a number*/

// #include<stdio.h>
// int main(){
//     int a,mult = 1; 
//     printf("Enter a number for knowing its factorial : \n");
//     scanf("%d", &a);
//     while(1=a){
//         mult = mult * a;
//         a = a - 1;
//     }
//     printf("%d",mult);
//     return 0;
//}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*[q]to find a number is prime or not*/


// #include <stdio.h>
// int main(){
//     int a,b=1;
//     printf("enter a number to find whether it is prime or not : \n");
//     scanf("%d",&a);
//     while(b>0){
//         b = a - 1;
//         a-- ;
//         if(a%b!=0){
//         printf("%d is a prime a number\n",a);    
//     }  
//     return 0;
// }
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*[q]Print number from number to 0*/

#include <stdio.h>
int main(){
    printf("enter a number from 1-10 \t");
    int a;
    scanf("%d", &a);
    while(a>=0){
        printf("%d \n",a);
        a = a-1;

    }

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
