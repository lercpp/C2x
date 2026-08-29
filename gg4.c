#include <stdio.h>
  
#define N 22
  
int main(void)
{
    printf("%d \n", N);
#undef N
    return 0;
}