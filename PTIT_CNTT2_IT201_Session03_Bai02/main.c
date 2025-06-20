#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if(n <= 0) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int *arr = (int *) calloc(n, sizeof(int));
    if(arr == NULL) {
        printf("Cap phat dong that bai");
        return 0;
    }
    printf("Nhap phan tu cua mang \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    printf("Max = %d", max);
    free(arr);
    return 0;
}
