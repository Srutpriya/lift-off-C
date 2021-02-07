#include<stdio.h>
int main()
{
    float phy,chem,bio,maths,comp,per;
    printf("Enter five subjects marks=\n");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&maths,&comp);
    per=(phy+chem+bio+maths+comp)/500*100;
    printf("percentage=%f",per);
    if(per>=90)
    
        printf("Grade A");
    
    else if(per>=80)
    
    printf("Grade B");
    
    else if(per>=70)
    
        printf("Grade C");
    
    else if(per>=60)
    
        printf("Grade D");
    
    else if(per>=40)
    
        printf("Grade E");
    
    else if(per<40)
    
        printf("Grade F");
    
    return 0;
}

