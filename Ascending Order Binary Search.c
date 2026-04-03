#include <stdio.h>

int main() {
    int a[] = {5, 6, 10, 13, 15, 17, 18, 19};
    int n = 8, key = 13;
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("13 found at position %d\n", mid + 1);
            return 0;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("13 not found\n");
    return 0;
}

