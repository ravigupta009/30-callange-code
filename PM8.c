// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter the number =");
//     scanf("%d",&n);
//     if (n % 2 == 0)
//     {
//         printf("odd order ");
//     }
//         else
//         {
//             printf("Even order");
//         }
//     }


/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number =");
    scanf("%d",&n);
    if (n >= 0)
    {
        printf("Postive value");
    }
    else
    {
        printf("Negative value");
    }

    return 0;
}