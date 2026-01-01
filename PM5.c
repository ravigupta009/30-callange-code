/*Write a program to convert temperature from Celsius to Fahrenheit.*/

// #include <stdio.h>

// int main(){
//     int a = 0;
//     int F = (1.8 * a) + 32;
//     printf("temperature from Celsius to Fahrenheit =%d",F);
//     return 0;
// }


/*Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main(){
    int a, b;
    a = 10;
    b = 6;
    printf("value a=%d value b=%d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("swap value a =%d \nswap value b =%d",a,b);
    return 0;
}

