#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=2;i<=sqrt(n);i++)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            if(cnt) cout << i << ' ' << cnt << ' ';
        }
        if(n > 1) cout << n << ' ' << 1 << ' ';
        cout << endl;
    }
    return 0;
}

