#include <stdio.h>

//typedef struct employee
//{
//    char* name;
//    int age;
//    double salary;
//}employee;
//
//int main(void)
//{
//    employee sam ={"Sam",23,5000};
//    printf("Name: %s\n", sam.name);
//    printf("Age: %d\n", sam.age);
//    printf("Salary: %.2f\n", sam.salary);
//    return 0;
//}


struct person
{
    char *name;
    int age;
};
 
int main(void)
{
    struct person sam = {"Sam", 23};
    struct person *p_sam = &sam;
    printf("Name: %s \n", p_sam -> name);
    printf("Age: %d \n", (*p_sam).age);
    return 0;
}