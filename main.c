//WATANABE, KEI ASHLEY L. DIT 1-2

#include <stdio.h>

int main() {
    int age, hasAnaktID, score, isSpecies;

    printf("***********************\n");
    printf("Welcome to Alien Stage!\n");
    printf("***********************\n\n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Do you have an ANAKT GARDEN identification card? (1 = Yes, 0 = No): ");
    scanf("%d", &hasAnaktID);

    printf("Please enter your score: ");
    scanf("%d", &score);

    printf("What is your species? (1 = Human, 0 = Alien): ");
    scanf("%d", &isSpecies);


    if (age > 15 || hasAnaktID == 1) {
        printf("\nYou are allowed to enter the Alien Stage competition.\n");
    } else {
        printf("\nYou are NOT allowed to enter the Alien Stage competition\n");
    }


    if (score >= 90 && isSpecies == 1) {
        printf("CONGRATULATIONS! You are also qualified to advance in the semi-finals.\n");
    } else {
        printf("Sorry. You can't advance and must proceed normally.\n");
    }


    if (!isSpecies) {
        printf("Only humans can participate in the competetion.\n");
    } else {
        printf("Welcome, human!\n");
    }

    return 0;
}
