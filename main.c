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

    printf("Please, enter a value to look for in the tree: ");
    scanf("%d", &number);
    if (find(root, number) == NULL) {
        printf("%d is not part of the tree\n", number);
    } else {
        printf("%d was found in the tree\n", number);
    }

    return 0;
}
