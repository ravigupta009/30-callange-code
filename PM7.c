/*Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     float principal,rate , time;
//     float si, ci;
//     printf("amount =");
//     scanf("%f",&principal);
//     printf("rate =");
//     scanf("%f",&rate);
//     printf("time =");
//     scanf("%d",time);
//     si = (principal * rate * time) / 100;
//     ci = principal * pow((1 + rate / 100), time);
//     printf("si =%f\n",si);
//     printf("Ci =%f\n",ci);

//     return 0;
// }



/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
 #include <stdio.h>

int main(){
    int hours,minutes,seconds;
    printf("Enter the number =");
    scanf("%d",seconds);
    hours = seconds/3600;
    minutes = (seconds % 3600)/60;
    seconds = (seconds % 60);
    printf("Hours =%d\nMinutes =%d\nSeconds =%d",hours,minutes,seconds);
     
    return 0;
}