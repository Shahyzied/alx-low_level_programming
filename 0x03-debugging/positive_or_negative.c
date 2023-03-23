#include"main.h"
void positive_or_negative(int i);
{
    printf("Enter an integer: ");
    scanf("%d", i);

    if (num > 0) {
        printf("%d is a positive number.\n", i);
    } else if (num < 0) {
        printf("%d is a negative number.\n", i);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
