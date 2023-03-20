#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"
#include <stdbool.h>


int main() {

    int seq[50] = {
            93, 32, 31, 36, 60, 1, 74, 87, 52, 2,
            76, 54, 74, 17, 90, 81, 96, 72, 22, 31,
            49, 83, 99, 1, 11, 55, 86, 39, 6, 10,
            48, 65, 52, 10, 86, 82, 43, 4, 3, 6,
            78, 35, 31, 82, 18, 1, 48, 80, 23, 38
            };

    int matrix[6][5] = {
        {31, 22, 4, 17, 24},
        {36, 40, 24, 29, 22},
        {34, 16, 39, 50, 26},
        {15, 20, 18, 7, 39},
        {4, 34, 22, 26, 30},
        {5, 42, 9, 31, 27}};

    printf("array = ");
    printArray(seq, 50);

    int val;

    printf("Vamos procurar um número?: \n");
    readInteger(&val);

    int index = arrayFirstIndexOf(val, seq, 50);
    if (index != -1)
    {
        printf("O número %d existe na posição %d no array.\n", val, index);
    }
    else
    {
        printf("O número %d não existe no array\n", val);
    }

    printf("\n--------------------------\n");
    printf("Input 'S', para obter uma sequência em ordem crescente, outro para uma ordem decrescente: \n");
    
    char opt;
    readChar(&opt);
    if (opt == 'S')
    {
        printf("A ordenar de forma crescente...\n");
        arraySort(seq, 50, true);
        printArray(seq, 50);
    }
    else
    {
        printf("A ordenar de forma decrescente...\n");
        arraySort(seq, 50, false);
        printArray(seq, 50);
    }

    return EXIT_SUCCESS;
}
