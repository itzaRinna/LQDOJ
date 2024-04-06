#include <stdio.h>

int tongTich(int n, int arr[]) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i] * arr[(i + 1) % n];
    }
    return tong;
}

int main() {
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("nhap array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int ketqua = tongTich(n, arr);
    printf("ket qua: %d\n", ketqua);

    return 0;
}
