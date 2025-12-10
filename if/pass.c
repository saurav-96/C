#include <stdio.h>
#include <conio.h>

int main() {
    int a;
    char x$='y' ;  
    while (x$ =='y') {

        printf("Enter Your Marks: ");
        scanf("%d", &a);

        if (a >= 35 && a <= 100) {
            printf("You are pass\n");
        }
        else if (a < 35 && a >= 0) {
            printf("You are fail\n");
        }
        else {
            printf("Invalid Input\n");
        }

        printf("Do You Want To Check Your Result Again? (y/n): ");
        scanf(" %c", &x$);   
    }

    getch();
    return 0;
}
