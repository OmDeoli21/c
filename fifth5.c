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



/*[q]Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0*/

#include <stdio.h>
int main(){
    int num=0;
    while(num<=20){ 
        if(num>=10){
             printf("%d\n",num);      
        }
        num = num +1;
} 
    return 0;
}
