#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    if (rows <=0 || cols<=0) {
        printf("Mang khong hop le");
        return 0;
    }
    int **arr=calloc(rows, sizeof(int*));
    for (int i = 0; i < rows; i++) {
        arr[i]=calloc(cols, sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max=arr[0][0], min=arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    printf(" max= %d \n min= %d ;", max, min);
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
