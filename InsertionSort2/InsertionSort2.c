#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number[5];

void InsertionSort() {
    for (int j = 1; j < 5; j++) {
        int key = number[j];
        int i = j - 1;
        while (i >= 0 && number[i] > key) {
            number[i + 1] = number[i];
            i = i - 1;
        }
        number[i + 1] = key;
    }
}

int main() {
    printf("Please enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }
    InsertionSort();
    for (int a = 0; a < 5; a++) {
        printf("%d ", number[a]);
    }
    getchar();
    getchar(); //I used this because if I used getchar() just once it didn't provide the input I wanted.
    return 0;
}
