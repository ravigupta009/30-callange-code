/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

// #include <stdio.h>

// int main(){
//     int num,num1,num2;
//     printf("Enter the three angle :");
//     scanf("%d%d%d",&num,&num1,&num2);
//     if (num+num1>num2 && num1==num2)
//     {
//         printf("Equilateral");

//     }
//     else if (num1 = (1.0 / 2)*num1 * num2)
//     {
//         printf("Isosceles");
//     }
//     else
//     {
//         printf("scalene");
//     }
    

//     return 0;
// }

/*Write a program to display the day of the week based on a number (1–7) using switch-case.
*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter the number(1-7) :");
    scanf("%d",&num);
    switch (num)
    {
     case 1 :
        printf("Monday");
        break;
     case 2 :
        printf("Tueday");
        break;
     case 3 :
        printf("Weday");
        break;
     case 4 :
        printf("Thuday");
        break;
     case 5 :
        printf("friday");
        break;
     case 6 :
        printf("Satday");
        break;
     case 7 :
        printf("sunday");
        break;

    default:
        break;
    }
    return 0;
}

