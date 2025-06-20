#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("So luong phan tu khong hop le \n");
        return 0;
    }
    int *arr=(int *)calloc(n,sizeof(int));
    if (arr==NULL) {
        printf("Cap phat bo nho that bai");
        return 0;
    }
    printf("Nhap phan tu cua mang \n");
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    int count=0,sum=0;
    for (int i=0;i<n;i++) {
        if (arr[i]%2==0) {
            sum+=arr[i];
            count++;
        }
    }
    float average=sum/count;
    printf("average = %.2f\n",average);
    return 0;
}