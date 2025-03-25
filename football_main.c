#include <stdio.h>
#include "football.h"

int main() {
    int score;
    printf("Enter NFL score: ");
    scanf("%d", &score);

    if (score < 2) {
        printf("Invalid score.\n");
        return 1;
    }

    print_combinations(score);
    int total = count_combinations(score);
    printf("\nNumber of possible scoring combinations: %d\n", total);

    return 0;
}
