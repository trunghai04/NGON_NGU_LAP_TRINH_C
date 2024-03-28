/*
Cho một số nguyên dương lớn có nhiều hơn 20 chữ số nhưng không quá 1000 chữ số. Hãy kiểm tra xem số đó có đầy đủ tất cả các chữ số từ 0 đến 9 hay không.

Dữ liệu vào

Dòng đầu ghi số bộ test, không quá 10
Mỗi bộ test là một dãy ký tự có độ dài không quá 1000, không có khoảng trống
Kết quả

Nếu dữ liệu vào không phải là một số nguyên hợp lệ (có ký tự không phải số hoặc bắt đầu bằng chữ số 0) thì in ra INVALID
Nếu dữ liệu vào thỏa mãn đầy đủ thì in ra YES, nếu không in ra NO
Ví dụ

Input

3

01234aa32432432432534545b987978
123444444444444566666666667890
324562783924723543243243242354354354333234324

Output

INVALID
YES
NO
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

int check(string &s){
    if(s[0] == '0') return -1;
    int dd[15] = {};
    for(char i : s){
        if(!isdigit(i)) return -1;
        dd[i - '0']++;
    }
    FOR(i, 0, 9) if(!dd[i]) return 0;
    return 1;
}

int main(){
    faster();
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        if(check(s) == -1) cout << "INVALID\n";
        else if(check(s) == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
