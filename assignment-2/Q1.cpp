#include <stdio.h>
struct Activity {
    int start;
    int finish;
};

void sortByFinish(struct Activity a[], int n) {
    int i, j;
    struct Activity temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j].finish > a[j + 1].finish) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 6;
    struct Activity a[] = {
        {1, 2},
        {3, 4},
        {0, 6},
        {5, 7},
        {8, 9},
        {5, 9}
    };

    int i;
    sortByFinish(a, n);

    printf("Selected activities:\n");

    
    int count = 1;
    int lastFinish = a[0].finish;
    printf("(%d, %d)\n", a[0].start, a[0].finish);

    
    for (i = 1; i < n; i++) {
        if (a[i].start >= lastFinish) {
            printf("(%d, %d)\n", a[i].start, a[i].finish);
            lastFinish = a[i].finish;
            count++;
        }
    }

    printf("Maximum number of activities = %d\n", count);

    return 0;
}

