#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    double *p_double = malloc(sizeof(double));
    if (p_double)
    {
        *p_double = 3.1415;
        printf("*p_double = %f\n", *p_double);
    }
    free(p_double);
 

    long *p_long = malloc(sizeof *p_long);
    if (p_long)
    {
        *p_long = 32;
        printf("*p_long: %ld\n", *p_long);
    }
    free(p_long);


    int n = 5;
    long *p_long = malloc(5 * sizeof(long));
    if (p_long)
    {
        for(int i = 0; i < n; i++)
        {
            p_long[i] = i + 1;
            printf("p_long[%d]: %ld\n",i, p_long[i]);
        }
    }
    free(p_long);

    

}