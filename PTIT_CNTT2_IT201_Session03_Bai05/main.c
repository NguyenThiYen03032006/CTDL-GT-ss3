#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows,cols;
    printf("Nhap so hang: ");
    scanf("%d",&rows);
    printf("Nhap so cot: ");
    scanf("%d",&cols);
    if (rows<=0 || cols<=0) {
        printf("Mang khong hop le");
        return 0;
    }
    int **arr=calloc(rows,sizeof(int*));
    for(int i=0;i<rows;i++) {
        arr[i]=calloc(cols,sizeof(int));
    }

    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum1=0,sum2=0;
    int min;

    if (rows==cols) {
        min=rows;
    }else {
        min=0;
    }
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            if (i==j) {
                sum1+=arr[i][j];
            }
            if (min!=0) {
                if (i+j==min-1) {
                    sum2+=arr[i][j];
                }
            }
        }
    }
    printf("Tong duong cheo chinh la: %d \n", sum1);
    if (min==0) {
        printf("Khong ton tai duong cheo phu ");
    }else {
        printf("Tong duong cheo phu la: %d", sum2);
    }
    for(int i=0;i<rows;i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
