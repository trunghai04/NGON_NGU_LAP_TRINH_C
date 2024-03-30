#include<iostream>


using namespace std;

int main()
{
    int N = 10005;
    bool check[10007];
    for(int i=2;i<=N ; i++) check[i] = 1;
    for(int i=2;i<=N ;i++) 
        if(check[i]) 
            for(int j = 2 * i; j <= N; j += i) 
                check[j] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        for(int i=n;i<=m;i++) 
            if(check[i]) cnt++;
        cout << cnt << endl;
    }
    return 0;
}

