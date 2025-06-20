#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n<=0) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int *arr=(int *)calloc(n, sizeof(int));
    if (arr==NULL) {
        printf("Mang cap phat that bai");
        return 0;
    }
    printf("Nhap vao phan tu cua mang: \n");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++) {
        printf("So thu %d = %d \n", i+1, arr[i]);
    }
    free(arr);
    return 0;
}
