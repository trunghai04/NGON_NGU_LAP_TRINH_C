/*
Cho một chữ cái bất kỳ. Hãy kiểm tra xem đó là chữ hoa hay chữ thường. Nếu là chữ thường thì in ra chữ hoa, nếu là chữ hoa thì in ra chữ thường tương ứng. 

Input

Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một chữ cái.

Output

Với mỗi bộ test, ghi ra kết quả trên một dòng.

Ví dụ

Input

2

B

q
Output

b

Q
*/

#include<stdio.h>

int main()
{
    int t;
    char c;
    cin>>c;
    while(t--)
    {
        cout << c<< endl;
        c ^= ' ';
       cout << c << endl;
    }
    return 0;
}
