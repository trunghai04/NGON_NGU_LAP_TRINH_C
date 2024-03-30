#include<bits/stdc++.h>

using namespace std;



int binSearchMin(int a[], int l, int r, int n)
{
    int mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] > a[n - 1]) l = mid + 1;
        else r = mid - 1;
    }
    return mid;
}

int binSearch(int a[], int l, int r, int x)
{
    int mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] == x) return mid;
        if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return mid;
}

int main()
{
    int t, n, x, posMin;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int a[n];
        for(int &i : a) cin >> i;
        posMin = binSearchMin(a, 0, n - 1, n);
        if(!posMin)
        {
            cout << binSearch(a, 0, n - 1, x) + 1 << endl;
            continue;
        }
        if(x < a[n - 1]) cout << binSearch(a, posMin, n - 1, x) + 1 << endl;
        else cout << binSearch(a, 0, posMin - 1, x) + 1 << endl;
    }
    return 0;
}
