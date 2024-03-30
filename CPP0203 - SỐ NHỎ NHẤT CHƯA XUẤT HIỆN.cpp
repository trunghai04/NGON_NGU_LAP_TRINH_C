#include<iostream>
#include <algorithm>

using namespace std;


int a[100005];

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int dd[1000005] = {};
        for(int i=1; i<=n;i++)
        {
            cin >> a[i];
            if(a[i] > 0) dd[a[i]]++;
        }
        for(int i=1; i<=1000000;i++)
        {
            if(!dd[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
