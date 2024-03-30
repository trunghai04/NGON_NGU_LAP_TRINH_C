
#include<iostream>
#include <algorithm>

using namespace std;


int calc(int n)
{
    int Sum = 0;
    while(n)
    {
        Sum +=  n % 10;
        n /= 10;
    }
    return Sum;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = calc(n);
        while(ans > 9) ans = calc(ans);
        cout << ans << endl;
    }
    return 0;
}

