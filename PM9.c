/*Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter the year  =");
//     scanf("%d",&n);
//     if (n %= 4){
//         printf("Leap year");

//     }
//     else{
//         printf("Not leap year");
//     }
//     return 0;
// }

/*Write a program to input a character and check whether it is a vowel or consonant using if–else*/

#include <stdio.h>

int main(){
    char character,a,e,i,o,u;
    printf("Enter the character =");
    scanf("%c",&character);
    if (character == 'a'||character == 'e'||character =='i'||character =='o'||character =='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("constant");
    }
    return 0;
}