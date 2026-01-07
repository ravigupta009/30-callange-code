/*Write a program to check if a number is an Armstrong number.
*/
// #include <stdio.h>
// #include<math.h>
// int main(){
//     int num,rimender,origenal,reuslt = 0,n = 0;
//     printf("Enter the number :");
//     scanf("%d", &num);

//     origenal = num;
//     while (origenal != 0)
//     {
//        origenal /= 10;
//        n++;
//     }
//     origenal = num;
//     while (origenal != 0)
//     {
//        rimender = rimender % 10;
//        reuslt += pow(rimender, n);
//        origenal /= 10;
//     }

//     if (reuslt == num)
//     {
//      printf("%d is Armstrong\n",num);
//     }else{
//      printf("%d is not Armstrong\n",num);
//     }
//    return 0;
// }

/*Write a program to check if a number is prime.
*/
#include <stdio.h>

int main(){
    int n,isprime;
    printf("Enter the prime number :");
    scanf("%d",&n);
    for (int i = 2; i*i <= n; i++){
        if (i%2 == 0){
         isprime = 0;
         break;
        }
    }

    if (isprime)
    {
     printf(" %d is Prime number \n",n);
    }else
    printf("%d is Not prime number \n",n);

    
    return 0;
}