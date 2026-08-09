#include <stdio.h>  

//int main(void) 
//{
//    int n = 10;
//    int *pn = &n;
//    printf("Address: %p \n", (void *)pn);
//    printf("Value: %d \n", *pn);
//    *pn = 883;
//    printf("Value: %d \n", *pn);
//    return 0;
//}

//int main(void) 
//{
    //int array[] = {1, 2, 3, 4, 5};
    //int *p = array;
    //for (int i = 0; i < 5; i++)
    //{
    //    printf("%d", p[i]);
    //}
    //char *message = "Hello";
    //printf("%s", message);
    //int array[] = {3, 4, 5, 6, 7};
    //int *p = array;
    //p=p+2;
    //printf("array[2] = %d\n", *p);
    //p=p+1;
    //printf("array[3] = %d\n", *p);
    //return 0;
//}

int main(void) 
{
    char *person[] = {"Tom", "Bob", "Sam"};
    for (int i = 0; i<3; i++)
    {
        printf("%s\n", person[i]);
    }
    return 0;
}