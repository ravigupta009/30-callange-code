/*Write a program to take a number as input and print its equivalent binary representation.
*/
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter the number is :");
//     scanf("%d", &n);

//     printf(" binary representation of %d is:", n);
//     for (int i = 31; i >= 0; i--)
//     {
//      int bit = (n >> 1) & 1;
//         printf("%d",bit);
//     }
//     printf("\n");
//     return 0;
// }


/*Write a program to check if a number is a palindrome.*/
#include <stdio.h>

int main(){
    int n,rversednumber = 0,rimendernumber;
    printf("Enter the number :");
    scanf("%d",&n);
    int orig = n;
    while (n != 0)
    {
     rimendernumber = n % 10;
     rversednumber = rversednumber *10 + rimendernumber;
     n /= 10;
    }
    if (orig == rversednumber)
    {
        printf("%d is palindrome.\n",orig);
    }else 
    {
      printf("%d is Not a palindrome.\n",orig);
    }
    
    
    
    return 0;
}