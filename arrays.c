#include "arrays.h"
#include <stdio.h>
#include <stdbool.h>

void printArray(int arr[], int arrLength) {
        printf("[");
        for (int i=0; i<arrLength; i++) {
                printf("%d%s", arr[i], (i<arrLength - 1 ? " , " : ""));
        }
        printf("]\n");
    }
int arrayFirstIndexOf(int val, int arr[], int arrLength) {
        for (int i=0; i<arrLength ; i++) {
                if (arr[i]==val) {
                        return i;
                }
        }
        return -1; //retorna -1 se nao encontrar valor no array
}
void arraySort(int arr[], int arrLength, bool ascending) {
        if (ascending == true) {
        for(int i=0; i < arrLength; i++) {
                for (int j=0; j < arrLength - 1 -i; j++) {
                        if (arr[j] > arr[j+1]) {
                                int aux = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = aux;
                        }
                }
        }
        }
        else {
                for (int i=0; i < arrLength - 1; i++) {
                        int max = arr[i];
                        int indexMax = i;
                        for (int j=i; j < arrLength; j++) {
                                max = arr[j];
                                indexMax = j;
                        }
                        int aux = arr[i];
                        arr[i] = arr[indexMax];
                        arr[indexMax] = aux;
                }
        }
}