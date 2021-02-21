#include<stdio.h>

int main()

{
	int sr;
	printf("Enter the no Start to print X");
	scanf("%d", &sr);
    for (int R = 1; R <= sr; R ++)

    {

        for (int O = 1; O <= sr; O ++)

        {

            if (R == O || (R + O == (sr+1)))

                printf("*");

            else

                printf(" ");
        }
        
        printf("\n");
    }
}
