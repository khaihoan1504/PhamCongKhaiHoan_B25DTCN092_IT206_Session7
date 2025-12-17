#include <stdio.h>

int sumArray(int arr[], int size) {
    // Kiểm tra đầu vào hợp lệ
    if (arr == NULL || size <= 0) {
        return 0;
    }
    // Đệ quy: phần tử cuối + tổng của (size - 1) phần tử trước đó
    return arr[size - 1] + sumArray(arr, size - 1);
}