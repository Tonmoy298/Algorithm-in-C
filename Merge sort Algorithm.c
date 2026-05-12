#include <stdio.h>

// Reg:(242-35-436)

void Merge(int a[], int l, int mid, int u) {
    int i = l;
    int j = mid + 1;
    int k = l;
    int b[100];

    while (i <= mid && j <= u) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= u) {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int x = l; x <= u; x++) {
        a[x] = b[x];
    }
}


void Mergesort(int a[], int l, int u) {
    if (l < u) {
        int mid = (l + u) / 2;

        Mergesort(a, l, mid);
        Mergesort(a, mid + 1, u);
        Merge(a, l, mid, u);
    }
}

int main() {
    int a[] = {12, 34, 112, 32, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    Mergesort(a, 0, n - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

