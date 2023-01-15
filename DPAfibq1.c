#include <stdio.h>
#include <stdlib.h>



typedef enum TypeTag {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    FIBONACCI
} TypeTag;

typedef struct Node {
    TypeTag type;
} Node;



Node* fibonacci(int n, TypeTag operation) {
    Node* memo = (Node*) malloc(sizeof(Node) * (n + 1));

    memo[0].type = 0;
    memo[1].type = 1;

    for (int i = 2; i <= n; i++) {
        switch (operation) {
            case ADD:
                memo[i].type = memo[i-1].type + memo[i-2].type;
                break;
            case SUBTRACT:
                memo[i].type = memo[i-1].type - memo[i-2].type;
                break;
            case MULTIPLY:
                memo[i].type = memo[i-1].type * memo[i-2].type;
                break;
            case DIVIDE:
                memo[i].type = memo[i-1].type / memo[i-2].type;
                break;
            case FIBONACCI:
                memo[i].type = memo[i-1].type + memo[i-2].type;
                break;
        }
    }

    return &memo[n];
}

int main() {
    int n = 10;
    Node* result = fibonacci(n, FIBONACCI);
    printf("Fibonacci of %d: %d", n, result->type);
    free(result);
    return 0;
}

