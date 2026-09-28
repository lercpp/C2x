#include <stdio.h>
#include <math.h>

int main(){
    int u = 5;
    double a = (log(u + 1) * 2 - sqrt(u)) / (u * u - 4 * u);
    double b = log(u + 1) * (2 - sqrt(u));
    printf("before a = %f\n", a);
    printf("after a = %f\n", b);
    return 0;
}