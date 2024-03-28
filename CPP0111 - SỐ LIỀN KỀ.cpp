

#include<bits/stdc++.h>

using namespace std;


bool check(string &s)
{
    int len = s.length() - 2;
    for(int i=0; i <= len;i++) {
        if(abs(s[i] - s[i + 1]) != 1) return 0;
    }
    return 1;
}

int main(){
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
