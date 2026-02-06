#include <stdio.h>

int main() 
{
    int age1, age2,sum;
    float avg;
    printf("Enter age1:");
    scanf("%d",&age1);
    printf("Enter age2:");
    scanf("%d",&age2);
    sum=age1+age2;
    avg=1.0*sum/2;
    printf("average and sum of %d and %d is =%.2f,%d",age1,age2,avg,sum);
    return 0;
}
