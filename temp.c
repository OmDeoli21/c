/*Class Problems*/
// {q4}. In program get the values of age in years, weight in grams and height in cm then convert
// the age into months, weight into kg, height into meters and display the student
// information as follows,
// Enter Name of Student: Surya
// Roll Number: 522
// Age in years: 18.5
// Weight in gram: 55000
// Height in cm: 163
// Enter CGPA/percentage: 59.40
// Name of Student: Surya
// Roll NRoll Number: umber: 522
// Age in months: 222 months
// Weight in Kilogram: 55
// Height in meters: 1.63
// Percentage Score Secured: 59.4%

// #include <stdio.h>
// int main(){
//     char name [100];
//     int rn;
//     float age;
//     float wt;
//     float ht;
//     float cgpa;
//     printf("Enter Name of Student: ");
//     scanf("%s",name);
//     printf("Roll Number: ");
//     scanf("%d",&rn);
//     printf("Age in years: ");
//     scanf("%f",&age);
//     printf("Weight in gram: ");
//     scanf("%f",&wt);
//     printf("Height in cm: ");
//     scanf("%f",&ht);
//     printf("Enter CGPA/percentage: ");
//     scanf("%f",&cgpa);
//     printf("\n");
//     printf("Name of Student: %s\n",name);
//     printf("Roll Number: %d\n",rn);
//     printf("Age in months: %.f\n",age*12);
//     printf("Weight in Kilogram: %.f\n",wt/1000);
//     printf("Height in meters: %.2f\n",ht/100);
//     printf("Percentage Score Secured: %.1f%%",cgpa);
//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// q5. Write a C program that takes hours, minutes and seconds (declare as long int) as input,
// and calculates the total number of seconds.
// Expected Output:
// Input
// hours: 5
// minutes: 37
// seconds: 10
// Total: 20230 seconds.


// #include<stdio.h>
// int main(){
//     printf("Input\n");
//     long int hr;
//     printf("hours: ");
//     scanf("%d",&hr);
//     long int min;
//     printf("minutes: ");
//     scanf("%d",&min);
//     long int sec;
//     printf("seconds: ");
//     scanf("%d",&sec);
//     printf("Total: %d seconds",(hr*60*60)+(min*60)+sec);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// q6.Given the following pseudo code, write a program that executes it.
// a. read x
// b. read y
// c. compute p=x*y
// d. compute s=x+y
// e. total=s2+p*(s-x)*(p+y)
// f. print total

// #include <stdio.h>
// int main(){
//     float x,y,p,s,total;
//     printf("enter x:");
//     scanf("%f",&x);
//     printf("enter y:");
//     scanf("%f",&y);
//     p=x*y;
//     s=x+y;
//     total=(s*2)+p*(s-x)*(p+y);
//     printf("total : %.1f",total);   

//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// q7.Write a program that reads a temperature in degrees Celsius and prints out the
// corresponding temperature in degrees Fahrenheit (F = (C * 9 / 5) + 32).


// #include<stdio.h>
// int main(){
//     float temp;
//     printf("Enter temperature in degrees celsius: ");
//     scanf("%f",&temp);
//     printf("The temperature in degrees Fahrenheit: %.1f",(temp*9/5)+ 32);
//     return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// q8.Write a program that reads a temperature in degrees Celsius and prints out the
// corresponding temperature in degrees Fahrenheit. Declare constant variable cv=32 and
// use it in the formula (F = (C * 9 / 5) + cv).

// #include<stdio.h>
// int main(){
//     float temp;
//     int cv = 32;
//     printf("Enter temperature in degrees celsius: ");
//     scanf("%f",&temp);
//     printf("The temperature in degrees Fahrenheit: %.1f",(temp*9/5)+ cv);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// q9.Write a C program that will calculate how much of a profit an investor will make. You
// will need to get the following three inputs:
//  the number of shares the investor purchased
//  the price of the stock (per share) when the investor purchased it
//  the price of the stock (per share) now

// The formula to use: Profit = (# of shares * Current Price) – (# of shares * Purchase Price)
// Output this message to the screen:
// You have made a profit of $_____ dollars since you bought _____ shares of this stock.
// Also, you must display the dollar amount formatted to two decimal places. Place this statement
// at the start of your program:

// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("Enter the number of shares purchased: ");
//     scanf("%f",&a);
//     printf("Enter the price of stock per share: ");
//     scanf("%f",&b);
//     printf("Enter the price of stock per share NOW: ");
//     scanf("%f",&c);
//     printf("\n");
//     float profit=(a*c)-(a*b);
//     printf("You have made a profit of $ %.2f dollars since you bought %d shares of this stock.",profit,a);
//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// q1.Write a C program that prints out the following menu for a game (include the line of
// asterisks (#) on top and $ bottom):
// ###########################################################

//                 Welcome!

// Please choose a number from the following options:
// 1. Play the game!
// 2. Demo the game!
// 3. Exit
// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


// #include <stdio.h>
// int main() {
//     printf("###########################################################\n\n");
//     printf("\t\t\tWelcome!\n\n");
//     printf("Please choose a number from the following options:\n");
//     printf("1. Play the game!\n");
//     printf("2. Demo the game!\n");
//     printf("3. Exit\n");
//     printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
//     return 0;
//}
