//
// Created by bauti on 10/1/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Root *newRoot(int value) {
    Root* aux = (Root*) malloc(sizeof (Root));
    if (aux == NULL) {
        printf("Not enough memory\n");
        exit(-1);
    }
    aux->value = value;
    aux->left = NULL;
    aux->right = NULL;
    return aux;
}

void insertInTree(Root **root, Root *n) {
    if (*root == NULL){
        *root = n;
    } else {
        if (n->value > (*root)->value) {
            insertInTree(&((*root)->right), n);
        } else if (n->value < (*root)->value) {
            insertInTree(&((*root)->left), n);
        } else {
            printf("%d is already in the tree\n", n->value);
        }
    }
}

Root* find(Root* root, int value) {
    if (root == NULL) {
        return NULL;
    } else if (root->value == value) {
        return root;
    } else if (value < root->value) {
        return find(root->left, value);
    } else {
        return find(root->right, value);
    }
}

void clearTree(Root** root) {
    if ((*root) != NULL){
        clearTree(&((*root)->left));
        clearTree(&((*root)->right));
        free(*root);
    }
}