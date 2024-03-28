/*CPP0101
Cho số nguyên dương N. 

Hãy tính S = 1 + 2 + ... + N

Dữ liệu vào: 

Dòng đầu ghi số bộ test, không quá 10
Mỗi dòng ghi một số nguyên dương N, không quá 109
Kết quả:

Với mỗi test, ghi kết quả trên một dòng.

Ví dụ:

Input

2

10

20
Output

55

210
*/
#include<bits/stdc++.h>

using namespace std;
#define ll long long


bool check(string &s){
    if(s.length() < 2) return 0;
    int len = s.length() - 1;
    return (s[len - 1] == '8' && s[len] == '6');
}

int main(){
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << (ll) n * (n + 1) / 2 << endl;
    }
    return 0;
}
