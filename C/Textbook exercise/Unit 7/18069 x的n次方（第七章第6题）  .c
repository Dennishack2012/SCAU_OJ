/*����������x��n����д�ݹ麯����x��n�η���

#include <stdio.h>

int F(int x, int n)
{
    if(_______________________) return _______________________;
    else return _______________________;
}

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d", F(x, n));
    return 0;
}*/

#include <stdio.h>

int F(int x, int n)
{
    if (n == 1) return x;
    else return F(x, n - 1) * x;
}

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d", F(x, n));
    return 0;
}