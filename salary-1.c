#include <stdio.h>
int main() 
{ 
    char name[20];
    double fixed_salary, total_sales, final_salary;
    scanf("%s", name);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sales);
    final_salary = fixed_salary + (total_sales * 0.15);
    printf("TOTAL = R$ %.2lf\n", final_salary);
    return 0;
}
