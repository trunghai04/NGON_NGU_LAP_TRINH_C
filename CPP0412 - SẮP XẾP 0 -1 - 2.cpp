#include <iostream>

using namespace std;

int a[100001];
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        int minIndex = i;
        for (int j = i + 1; j <= n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        selectionSort(a, n);
        for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}
