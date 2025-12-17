#include "utils.h"

/**
 * Hàm chuẩn tính tổng các phần tử trong mảng
 * Sử dụng vòng lặp for - hiệu quả và an toàn
 * 
 * @param arr Mảng số nguyên cần tính tổng
 * @param size Kích thước của mảng
 * @return Tổng các phần tử trong mảng
 */
int sumArray(int arr[], int size) {
    // Kiểm tra đầu vào hợp lệ
    if (arr == NULL || size <= 0) {
        return 0;
    }
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
/**
 * Hàm chuẩn tìm giá trị lớn nhất trong mảng
 * Sử dụng vòng lặp for - hiệu quả và an toàn
 * 
 * @param arr Mảng số nguyên cần tìm max
 * @param size Kích thước của mảng
 * @return Giá trị lớn nhất trong mảng, hoặc INT_MIN nếu mảng rỗng/NULL
 */
int maxValue(int arr[], int size) {
    // Kiểm tra đầu vào hợp lệ
    if (arr == NULL || size <= 0) {
        return 0; // Trả về 0 khi mảng rỗng hoặc NULL
    }
    
    int max = arr[0]; // Giả định phần tử đầu tiên là lớn nhất
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}