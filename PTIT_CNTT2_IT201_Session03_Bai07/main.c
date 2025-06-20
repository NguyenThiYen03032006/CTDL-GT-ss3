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
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    printf("Nhap so hang can tinh tong : ");
    scanf("%d", &k);
    if (1<=k && k<=rows) {
        int sum = 0;
        for (int i = 0; i < cols; i++) {
            sum+=arr[k-1][i];
        }
        printf("sum = %d", sum);
    }else {
        printf("Hang can tinh khong ton tai");
    }
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
