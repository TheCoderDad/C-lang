#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age) {
        case 1:
            printf("you are 1 year old.\n");
            break;
        case 22:
            printf("you are 22 year old.\n");
            break;
        case 33:
            printf("you are 33 year old.\n");
            break;
        default:
            printf("you are %d year old.\n",age);
    }

    return 0;
}
