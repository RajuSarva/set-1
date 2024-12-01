#include <iostream>
using namespace std;

int countInversions(int arr[], int n) {
    int inversionCount = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversionCount++;
            }
        }
    }

    return inversionCount;
}

int main() {
    int arr[] = {7, 2, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of inversions: " << countInversions(arr, n) << endl;
    return 0;
}
