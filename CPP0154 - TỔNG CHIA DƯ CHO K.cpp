
#include<bits/stdc++.h>

using namespace std;


#define ll long long


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll k;
        cin >> k;
        ll sum = 0;
        for(int i=1;i<=n;i++)
        {
            sum += i % k;
            if(sum > k) break;
        }
        if(sum == k) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
