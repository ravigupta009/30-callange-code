/*Write a program to display the month name and number of days using switch-case for a given month number.
*/
// #include <stdio.h>

// int main(){
//     int month;
//     printf("Enter the number(1-12) :");
//     scanf("%d",&month);
//     switch (month)
//     {
//        case 1:
//          printf("january");
//          break;
//        case 2:
//          printf("february");
//          break;
//        case 3:
//          printf("March");
//          break;
//        case 4:
//          printf("April");
//          break;
//        case 5:
//          printf("May");
//          break;
//        case 6:
//          printf("June");
//          break;
//        case 7:
//          printf("July");
//          break;
//        case 8:
//          printf("Aguest");
//          break;
//        case 9:
//          printf("September");
//          break;
//        case 10:
//          printf("October");
//          break;
//        case 11:
//          printf("November");
//          break;
//        case 12:
//          printf("December");
//          break;
//     default:
//         break;
//     }
//     return 0;
// }

/*Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>

int main(){
    float cost_price,selling_price,profit,loss;
    printf("Enter the cost price :");
    scanf("%f",&cost_price);
    printf("Enter the selling price :");
    scanf("%f",&selling_price);
    if(selling_price>cost_price)
    {
        profit = selling_price - cost_price;
        printf("loss percentage%.2f%%\n",(profit/cost_price)*100);
    }
    else if (cost_price>selling_price)
    {
        loss = cost_price - selling_price;
        printf("profit percentage%.2f%%\n",(loss/cost_price)*100);
    }
    
    return 0;
}