/*
Viết chương trình tính tổng  S = 1 + 1.2 + 1.2.3 + ...+1.2.3...N

Input

Dữ liệu vào chỉ có 1 dòng ghi số N không quá 20. 

Output

Kết quả ghi trên một dòng. 

Ví dụ

Input
3

Output
9
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long giaiThua[n + 1];
    giaiThua[1] = 1;
    long long sum = 1;
    for(int i = 2; i <= n; ++i)
    {
        giaiThua[i] = giaiThua[i - 1] * i;
        sum += giaiThua[i];
    }
    printf("%lld", sum);
    return 0;
}
