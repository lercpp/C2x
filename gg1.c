
#include <stdio.h>         
//int main(void)                   
//{                                  
    //printf("Hello METANIT.COM!\n");
    //printf("Hello C\n");
    //char c = 'F';
    //int t = 10;
    //float f = 3.14f;
    //double d = 3.14159l;
    //printf("c=%c \n",c);
    //printf("t=%d \n",t);
    //printf("f=%f \n",f);
    //printf("d=%lf \n",d);
    //int a = 10;
    //int b = 20;
    //int c = a+b;
    //printf("%d",c);
    //int a = 10;
    //int b = 4;
    //int c = a/b;
    //printf("%d",c);
    //return 0;                       
//}    
        
//int main(void)  
//{
    //int a = 10;
    //int b = 20;
    //int c = a+b;
    //printf("%d",c);
    //int a = 10;
    //int b = 4;
    //float c = a/b;
    //printf("%f",c);
    //int a = 10;
    //int b = 5;
    //int c = a+b;
    //float d = c/2;
    //printf("%d \n",c);
    //printf("%f",d);
    //int a = 10;
    //int b = 20;
    //int c = a%b;
    //float a = 10;
    //float b = 3;
    //float c = a / b;
    //printf("%.3f", c);
    //return 0;  
//}    

//int main(void)  
//{
    //int a = 2;
    //int b = 3;
    //int c = 10;
    //int max = c;

    //if (a==b){
    //    printf("ne lox");
    //}
    //else{
    //    printf("lox");
    //}

    //if (a > 4 && a < 14){
    //    printf("lox");
    //}
    //else{
    //    printf("oke");
    //}
    //return 0;
 
    //if(a>b && a>c)
    //    max=a;
    //else if(b>a && b>c)
    //    max=b;
    //printf("max %d",max);
//}

//int main(void) 
//{
    //for(int i=0;i<5;i++)
    //{
    //    printf("hello\n");
    //}
//
    //int count=0;
    //while (count<5)
    //{
    //    printf("oke\n");
    //    count++;
    //}

    //for(int i=11; i < 20; i++)
    //{
    //    if(i % 2 == 1)
    //    {
    //        printf("%d ", i);
    //    }
    //}

    //int n = 7;
    //for(int i =0; i < n; i++){
    //    for(int j = 0; j< n; j++){
    //        if(j==i || j == n-i-1) printf("*");
    //        else printf(" ");
    //    }
    //    printf("\n");
    //}
    //return 0;
//}

int main(void) 
{
    //char message[] = "Hello METANIT.COM";
    //printf("%s\n", message);

    int numbers[] = {1, 2, 3, 4, 5, 6}; 
 
    int n = sizeof(numbers) / sizeof(numbers[0]);  
    int m = n / 2;    
    for(int i = 0; i < m; i++)
    {
        int temp = numbers[i];
        numbers[i] = numbers[n-i-1];
        numbers[n-i-1] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d", numbers[i]);
    }
    return 0;

