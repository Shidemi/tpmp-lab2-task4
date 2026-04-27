#include <stdio.h>
#include "file.h"

int main() {
    Data d;

    readFile(&d);

    int sum = 0;
    for (int i = 0; i < d.size; i++) {
        sum += d.numbers[i];
    }

    writeFile(sum);

    printf("Done! Check result.txt\n");

    return 0;
}
