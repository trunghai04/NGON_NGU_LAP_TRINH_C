#include<iostream>
#include <math.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define vi vector<int>
#define vll vector<ll>

int sumNum(int n)
{
    int res = 0;
    while(n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    int N = 100005;
    bool check[100007];
    for(int i=2; i<=N; i++) check[i] = 1;
    for(int i=2; i<=N; i++) 
    {
        if(check[i]) 
        {
            for(int j = 2 * i; j <= N; j += i) 
            check[j] = 0;
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(check[n])
        {
            cout << "NO\n";
            continue;
        }
        int sumNumber = sumNum(n);
        int sumPrime = 0;
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                int cnt = 0;
                while(n % i == 0)
                {
                    n /= i;
                    cnt++;
                }
                sumPrime += sumNum(i) * cnt;
            }
        }
        if(n > 1) sumPrime += sumNum(n);
        if(sumPrime == sumNumber) cout << "YES\n";
        else cout << "NO\n";
    }
}
