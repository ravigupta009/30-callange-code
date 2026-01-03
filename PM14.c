/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
// #include <stdio.h>

// int main(){
//     int day;
//     printf("Enter the day :");
//     scanf("%d",&day);
//     if(day<=0)
//     {
//         printf("Zero fine");
//     }else if (day<=5)
//     {
//        printf("Rs = 2");
//     }else if (day<=19)
//     {
//         printf("Rs = 4");
//     }else if (day<=29)
//     {
//        printf("Rs = 6");
//     }else if (day>=30)
//     {
//        printf("Membership Cancelled.");
//     }
//     return 0;
// }

/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>

int main(){
    int bill;
    printf("Enter the  bills unit :");
    scanf("%d",&bill);
    if (bill<=0)
    {
       printf("Zero charge");
    }else if (bill<=100)
    {
       printf("Rs = 5 charge");
    }else if (bill<=200)
    {
       printf("Rs = 7 charge");
    }else if (bill<= 300)
    {
       printf("Rs = 10 charge");
    }else if (bill>=301)
    {
        printf("Rs = 12 charge");
    }
    
    return 0;
}