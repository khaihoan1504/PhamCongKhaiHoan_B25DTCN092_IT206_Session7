#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

#define ARRAY_SIZE 1000000

// Hàm hỗ trợ đo thời gian và in kết quả
void run_benchmark(const char* name, int (*func)(int[], int), int arr[], int size) {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int result = func(arr, size);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%-20s | Ket qua: %-10d | Thoi gian: %f giay\n", name, result, cpu_time_used);
}

int main() {
    // 1. Cap phat bo nho cho mang lon tren Heap (de tranh Stack Overflow)
    int *largeArray = (int*)malloc(ARRAY_SIZE * sizeof(int));
    if (largeArray == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    // 2. Khoi tao du lieu ngau nhien
    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++) {
        largeArray[i] = rand();
    }
    // Dam bao co mot gia tri lon nhat de kiem chung
    largeArray[500000] = 2000000000; 

    printf("--- BAT DAU BENCHMARK VOI %d PHAN TU ---\n", ARRAY_SIZE);
    printf("------------------------------------------------------------\n");

    // 3. Chay thu nghiem
    run_benchmark("maxValue (Chuan)", maxValue, largeArray, ARRAY_SIZE);

    // 4. Giai phong bo nho
    free(largeArray);
    return 0;
}