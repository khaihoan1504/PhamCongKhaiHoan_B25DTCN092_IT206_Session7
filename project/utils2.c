#include <stdio.h>

int sumArray(int arr[], int size) {
    // Kiểm tra đầu vào hợp lệ
    if (arr == NULL || size <= 0) {
        return 0;
    }
    
    int sum = 0;
    int i = 0;
    while (i < size) {
        sum += arr[i];
        i++;
    }
    return sum;
}