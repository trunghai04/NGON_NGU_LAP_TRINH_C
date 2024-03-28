/*
Viết chương trình tính tổng  S = 1 + ½ + 1/3 + … + 1/N

Input

Dữ liệu vào chỉ có 1 dòng ghi số N không quá 6 chữ số. 

Output

Kết quả ghi chính xác với 4 số phần thập phân. 

Ví dụ

Input
2

Output
1.5000
*/

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
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

bool check(string &s)
{
    if(s.length() < 2) return 0;
    int len = s.length() - 1;
    return (s[len - 1] == '8' && s[len] == '6');
}

int main()
{
    faster();
    int n;
    cin >> n;
    double sum = 1;
    FOR(i, 2, n) sum += 1.0 / i;
    cout << setprecision(4) << fixed << sum;
    return 0;
}
