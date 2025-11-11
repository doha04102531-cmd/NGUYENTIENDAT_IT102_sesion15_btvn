#include <stdio.h>

int timKiemNhiPhan(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            return mid; 
        } else if (arr[mid] < x) {
            left = mid + 1; 
        } else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int arr[] = {0, 2, 4, 8, 25, 43, 47, 66, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
	printf("Mang: ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
    printf("\nNhap phan tu can tim: ");
    scanf("%d", &x);

    int result = timKiemNhiPhan(arr, n, x);

    if (result != -1)
        printf("\nPhan tu %d duoc tim thay tai chi so %d\n", x, result);
    else
        printf("\nKhong tim thay phan tu %d trong mang!\n", x);

    return 0;
}