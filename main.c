#include <stdio.h>
#include "tree.h"
#define N 5


int main() {
    printf("Hello, World!\n");
    Root* root = NULL;
    int i, number;
    for (i = 0; i < N; i++) {
        printf("Please, enter a number: ");
        scanf("%d", &number);
        insertInTree(&root, newRoot(number));
    }
    return 0;
}
