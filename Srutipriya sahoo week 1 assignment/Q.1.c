#include<stdio.h>
 int main()
 {
     float a,b,sum,subtraction,product,division;
     printf("enter two numbers\n");
     scanf("%f%f" ,&a,&b);
     sum=a+b;
     printf("sum =%f\n",sum);
     subtraction=a-b;
     printf("subtraction =%f\n",subtraction);
     product=a*b;
     printf("product =%f\n",product);
     division=a/b;
     printf("division =%f\n",division);
     return 0;
 }