#include <stdio.h>
#include "utils.h"

int main() {
    int myNumbers[] = {5, 10, 15, 20, 25};
    int n = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("--- KET QUA TINH TONG MANG ---\n");
    
    // Gọi hàm chuẩn sumArray
    int result = sumArray(myNumbers, n);
    printf("Tong mang: %d\n", result);

    return 0;
}