#include <stdio.h>

int main() {
    int arr[5] = {87, 65, 98, 75, 32};
    int *p = arr + 2;
    
    // Add the new line of code here
    printf("a[2] = %d%c", *(p + 1), '\n');
    
    return 0;
}
