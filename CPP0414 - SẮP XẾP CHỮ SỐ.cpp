#include<bits/stdc++.h>

using namespace std;

#define ll long long

int a[105];

int main()
{
    int t, n;
    ll k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        set<int> s;
        while(n--)
        {
            cin >> k;
            while(k)
            {
                s.insert(k % 10);
                k /= 10;
            }
        }
        for(auto i : s) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

