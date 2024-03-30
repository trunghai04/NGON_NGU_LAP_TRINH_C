#include<bits/stdc++.h>

using namespace std;

int a[100005];

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;++i) cin >> a[i];
        sort(a + 1, a + 1 + n);
        int l = 1, r = n;
        if(n & 1)
        {
            while(l < r) cout << a[r--] << ' ' << a[l++] << ' ';
            cout << a[r] << ' ';
        }
        else while(l <= r) cout << a[r--] << ' ' << a[l++] << ' ';
        cout << endl;
    }
    return 0;
}
