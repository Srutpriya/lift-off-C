#include<stdio.h>
int main()
{
    int celcius,farheneit;
    printf("enter temperature in celcius\n");
    scanf("%d",&celcius);
    farheneit=(celcius*5/9)+32;
    printf("farheneit=%d",farheneit);
    return 0 ;

}