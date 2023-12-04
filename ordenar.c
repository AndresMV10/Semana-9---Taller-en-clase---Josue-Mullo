#include <stdio.h>
#include <stdlib.h>

int Sort(int arr[], int n) {
    int i, j, cont;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            cont++;
        }
    }
    return cont;
}

int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int c = Sort(arr, n);
    printf("\nIteraciones : %d", c);
    printf("\nArreglo ordenado de menor a mayor: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}