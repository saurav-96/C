#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;

    printf("Enter Any Three Number");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b&&a>=c)
    {
        if(b>=c)
        {
            printf("\n %d is the Second Largest Number",b);
        }
        if(c>=b)
        {
            printf("\n %d is the Second Largest Number",c);
        }
    }   

    if(b>=a&&b>=c)
        {
             if(a>=c)
             {
                printf("\n %d is the second Largest Number",a);
             }
             if(c>=a)
             {
                printf("\n %d is the Second Largest Number",c);
             }
        }
     if(c>=a&&c>=b)
        {
             if(a>=b)
             {
                printf("\n %d is the second Largest Number",a);
             }
              if(b>=a)
             {
                printf("\n %d is the Second Largest Number",b);
             }
        }
    

    getch();
    return 0;
}