/*
Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên dương không quá 9 chữ số, hãy kiểm tra xem đó có phải số lộc phát hay không.

Input

Dòng đầu là số bộ test, mỗi dòng tiếp theo ghi một số cần kiểm tra.

Ouput

Nếu đúng in ra YES, nếu sai in ra NO.

Ví dụ

Input
3

181
88888
608868

Output
NO
YES
YES
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
    for(auto i : s) if(i != '0' && i != '6' && i != '8') return 0;
    return 1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        if(check(s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
