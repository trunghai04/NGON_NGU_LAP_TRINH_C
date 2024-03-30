#include<bits/stdc++.h>

using namespace std;


int a[1005];

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[i];
        int ans = - INT_MAX;
        for(int i=1;i<=n;i++){
        	for(int j=i+1;j<=n;j++) 
				if(abs(ans) > abs(a[i] + a[j])) 
					ans = a[i] + a[j];
		}
        cout << ans << endl;
    }
    return 0;
}
