#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1e5 + 10;
int a[maxn];
void quick_sort(int L, int R)
{
    if(L >= R) return;
    int x = a[L];
    int l = L, r = R;
    while(l < r)
    {
        while(l < r && a[r] >= x) r--;
        if(l < r)
        {
            a[l] = a[r];
        }
        while(l < r && a[l] < x) l++;
        if(l < r)
        {
            a[r] = a[l];
        }
    }
    a[r] = x;
    quick_sort(L, l-1);
    quick_sort(l+1, R);
}
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        quick_sort(1, n);
        for(int i = 1; i <= n; i++)
        {
            printf("%d ", a[i]);
        }
        puts("");
    }
    return  0;
}
