#include <stdio.h>
#include "file.h"

void readFile(Data *d) {
    FILE *f = fopen("data.txt", "r");
    d->size = 0;

    while (fscanf(f, "%d", &d->numbers[d->size]) != EOF) {
        d->size++;
    }

    fclose(f);
}

void writeFile(int sum) {
    FILE *f = fopen("result.txt", "w");
    fprintf(f, "Sum = %d\n", sum);
    fclose(f);
}
