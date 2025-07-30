// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user


#include <stdio.h>
int main(){
    float income;
    printf("Type your income:  \n");
    scanf("%f", &income);

    if(income<250000){
        printf("NO TAX!!");
    }
    if(income>250000 && income<500000){
        printf("Tax to be paid by you : %.1f", income/20);
    }
     if(income>500000 && income<1000000){
        printf("Tax to be paid by you : %.1f", income/5);
    }
    else
    {
        printf("tax to be paid by you : %.1f", income*0.3);
    }

    return 0;
}
//codewithharry practice set 3 q2