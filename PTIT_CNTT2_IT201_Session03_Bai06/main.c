#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n,m;
    printf("n = ");
    scanf("%d", &n);
    if (n<=0) {
        printf("Mang khong hop le");
        return 0;
    }
    int *arr = malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Cap phat bo nho that bai");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("m = ");
    scanf("%d", &m);
    if (m<0) {
        printf("So phan tu them vao khong duoc am");
        return 0;
    }else if (m>0) {
        int *arr2 = realloc(arr, (m+n)*sizeof(int));
        if (arr2 == NULL) {
            printf("Mo rong bo nho that bai");
            return 0;
        }else {
            arr=arr2;
        }
        for (int i=n; i<(m+n); i++) {
            scanf("%d", &arr[i]);
        }
        for (int i=0; i<(m+n);i++) {
            printf("%d ", arr[i]);
        }
    }else {
        for (int i=0; i<n;i++) {
            printf("%d ", arr[i]);
        }
    }


    free(arr);
    return 0;
}
