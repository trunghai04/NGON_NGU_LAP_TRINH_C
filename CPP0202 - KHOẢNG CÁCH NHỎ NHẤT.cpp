#include<iostream>
#include <climits>

using namespace std;

void sort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int a[100005];

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int ans = INT_MAX;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, n);
        for (int i = 2; i <= n; i++) 
			ans = min(ans, a[i] - a[i - 1]);
        cout << ans << endl;
    }
    return 0;
}
