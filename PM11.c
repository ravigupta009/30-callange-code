/*Write a program to find the roots of a quadratic equation and categorize them.
*/

// #include <stdio.h>

// int main(){
//     float a,b,c;
//     float D,root1,root2,realroot,imageroot;
//     printf("Enter the a b and c  =");
//     scanf("%d%d%d",&a,&b,&c);
//     D = b*b - 4*a*c;
//     if(D>0)
//     {
//         printf("Root are reals and different\n");
//         printf("roo1")
//     }
//     return 0;
// } 



/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter the percentage(0-100) :");
    scanf("%d",&n);
    if (n>=90)
    {
        printf("Grade A");
    }
    else if (n>=80 && n<=89)
    {
       printf("Grade B");
    }else if (n>=70 && n<=79)
    {
        printf("Grade C");
    }else if (n>=60 && n<=69)
    {
        printf("Grade D");
    }
    else if ( n<= 59 )
    {
        printf("Fail");
    }


    return 0;
}