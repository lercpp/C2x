#include <stdio.h>  

void hello_world()
{
    printf("okeokeokeoke\n");
}

int calculate(int m, int n)
{
    if(m > n)
    {
        return m - n;
    }
    else
    {
        return m + n;
    }
}

int slay(int n) {
    if (n < 0) {
        return -1;
    }

    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

void oke(int a)
{
    a = a * 5;
    printf("%d\n", a);

}

int main(void) 
{
    hello_world();
    oke(10);
    int result1 = calculate(6,2);
    printf("%d \n", result1);
    printf("factorial of 4: %lld\n", slay(4));
    return 0;
}