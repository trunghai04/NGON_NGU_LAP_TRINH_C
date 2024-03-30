#include<iostream>
#include <vector>
using namespace std;

#define pb push_back
#define ll long long
 
int main()
{
    vector<ll> F;
    F.pb(0);
    F.pb(1);
    int idx = 0;
    ll n1 = 0, n2 = 1, n3;
    while(idx <= 89)
    {
        n3 = n1 + n2;
        F.pb(n3);
        n1 = n2;
        n2 = n3;
        idx++;
    }
    int t;
    ll n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(binary_search(F.begin(), F.end(), n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}  
