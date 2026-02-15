#include <stdio.h>
 
int main() {
 
    double R,v,pi;
    scanf("%lf",&R);
    pi=3.14159;
    v=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",v);
    return 0;
}
