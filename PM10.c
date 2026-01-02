/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/
// #include <stdio.h>

// int main(){
//     char letter;
//     printf("Enter the character =");
//     scanf("%c",&letter);
//     if(letter >= 'a' && letter <= 'z')
//     {
//         printf("Lowercase alphabet");
//     }
//     else if (letter >= 'A' && letter <= 'Z')
//     {
//        printf("Upercase alphabet");
//     }else if (letter = '1')
//     {
//         printf("Digit");
//     }
    
   
//     return 0;
// }

/*Write a program to input three numbers and find the largest among them using if–else.
*/

#include <stdio.h>

int main(){
    int n,n1,n2;
    printf("Enter the three number =");
    scanf("%d%d%d",&n,&n1,&n2);
    if (n > n1 && n > n2 )
    {
      printf("largest numner =%d\n",n);
    }
    else if (n2>n && n2>n1)
    {
      printf(" largest number =%d\n",n2);
    }
    else
    {
        printf("largest number =%d\n",n1);
    }
    
    return 0;
}