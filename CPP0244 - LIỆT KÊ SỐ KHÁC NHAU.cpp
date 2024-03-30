#include<bits/stdc++.h>

using namespace std;



int n, x;
set<int> s;

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        s.insert(x);
    }
    for(auto i : s) cout << i << ' ';
    return 0;
}
