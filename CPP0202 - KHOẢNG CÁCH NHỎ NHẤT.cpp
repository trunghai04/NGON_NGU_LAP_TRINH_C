
#include<iostream>
#include <algorithm>

using namespace std;


int a[100005];

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        int ans = INT_MAX;
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        sort(a + 1, a + 1 + n);
        for(int i=2; i<=n;i++) ans = min(ans, a[i] - a[i - 1]);
        cout << ans << endl;
    }
    return 0;
}
