#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int* vendas[], int num_categorias);

int main() {
    int num_categorias;
    scanf("%d", &num_categorias);

    if (num_categorias <= 0) {
        return 0;
    }

    int* vendas[num_categorias];
    for (int i = 0; i < num_categorias; i++) {
        vendas[i] = (int*)malloc(sizeof(int));
        if (vendas[i] == NULL) {
            exit(1);
        }
        scanf("%d", vendas[i]);
    }

    imprime_histograma(vendas, num_categorias);

    for (int i = 0; i < num_categorias; i++) {
        free(vendas[i]);
    }

    return 0;
}

void imprime_histograma(int* vendas[], int num_categorias) {
    if (num_categorias <= 0) {
        return;
    }

    for (int i = 0; i < num_categorias; i++) {
        printf("%d ", *vendas[i]);
        for (int j = 0; j < *vendas[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}
