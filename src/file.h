#ifndef FILE_H
#define FILE_H

typedef struct {
    int numbers[100];
    int size;
} Data;

void readFile(Data *d);
void writeFile(int sum);

#endif
