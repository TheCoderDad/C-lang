#include <stdio.h>

int main(void) {
    int science, maths, boths;

    printf("Enter your science result: ");
    scanf("%d", &science);

    printf("Enter your maths result: ");
    scanf("%d", &maths);

    printf("Enter your both subjects result: ");
    scanf("%d", &boths);

    // Assuming passing grades are 1 (pass) and 0 (fail)
    if (science && maths && boths) {
        printf("Congratulations! You have passed both subjects.\n");
        printf("You win a 45 rupees gift!\n");
    } else if (science || maths) {
        printf("You have passed at least one subject.\n");
        printf("You win a 15 rupees gift!\n");
    } else {
        printf("Unfortunately, you have failed both subjects.\n");
    }

    return 0;
}
