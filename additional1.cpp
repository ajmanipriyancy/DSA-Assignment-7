#include <iostream>
using namespace std;

void countingSort(int a[], int n) {
    int mx = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > mx) mx = a[i];

    int c[mx + 1] = {0};
    for (int i = 0; i < n; i++) c[a[i]]++;

    int idx = 0;
    for (int i = 0; i <= mx; i++)
        while (c[i]--) a[idx++] = i;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    countingSort(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
