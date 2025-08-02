#include <stdio.h>

int main() {
    int array1[7] = {10, 12, 15, 16, 18, 20, 27};
    int array2[7];
    int i;

    // Copying array1 to array2
    for (i = 0; i < 7; i++) {
        array2[i] = array1[i];
    }

    // Printing array2
    printf("array2: ");
    for (i = 0; i < 7; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}


