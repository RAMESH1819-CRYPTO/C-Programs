#include <stdio.h>

int main() {
    int start, end, count = 0;

    // Input from user
    printf("Enter the initial value: ");
    scanf("%d", &start);

    printf("Enter the final value: ");
    scanf("%d", &end);

    printf("Numbers divisible by 7 between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal numbers divisible by 7 = %d\n", count);

    return 0;
}



/*#include <stdio.h>

int main() {
    int count = 0;

    printf("Numbers divisible by 7 between 100 and 200:\n");

    for (int i = 100; i <= 200; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal numbers divisible by 7 between 100 and 200 = %d\n", count);

    return 0;
}*/
