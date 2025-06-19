#include <stdio.h>
#include <stdlib.h>


void arraySort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }

        
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    arraySort(a, n);

    int i = 0, j = n - 1;
    int count = 0;

    while (i < j) {
        if (a[i] + a[j] <= k) {
            count++;
            i++;
            j--;
        } else {
            // j--; // try smaller number
        }
    }

    printf("%d\n", count);
    return 0;
}
