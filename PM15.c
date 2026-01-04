/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
// #include <stdio.h>

// int main(){
//     char choice;
//     float a, b;
//     printf("The value of a :\n");
//     printf("The value of b :\n");
//     scanf("%f%f",&a,&b);
//     printf("Choice :");
//     scanf(" %c ", &choice);
//     switch (choice)
//     {
//     case '+':
//         printf("Add %.2f",a+b);
//         break;
//     case '-':
//         printf("sub %.2f",a-b);
//         break;
//     case '*':
//         printf("mut %.2f",a*b);
//         break;
//     case '/':
//         printf("div %.2f",a/b);
//         break;
//     case '%':
//         printf("percentage %.2f",(int)a % (int)b);
//         break;
    
//     default:
//         break;
//     }
//     return 0;
// }


/*Write a program to print numbers from 1 to n.*/
#include <stdio.h>

int main(){
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
   for ( i = 1; i <= n; i++)
   {
    printf("%d",i);
   }
   
    return 0;
}