
#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define vi vector<int>
#define vll vector<ll>

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        FOR(i, 2, sqrt(n))
        {
            while(n % i == 0)
            {
                ans = i;
                n /= i;
            }
        }
        if(n > 1) ans = n;
        cout << ans << endl;
    }
    return 0;
}
