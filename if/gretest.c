#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;

    printf("Enter any Three Number");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("\n %d is the Largest Number", a);
    }
    else if (b >= a && b >= c)
    {
        printf(" \n %d is the Largest Number", b);
    }
    else   
    {
        printf("\n %d is the Largest Number", c);
    }

getch ();
return 0;
}