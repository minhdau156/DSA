// phuong phap sinh
// liet ke cac so nhi phan thuan nghich co do dai n trong khoang tu 0 toi n - 1
#include <bits/stdc++.h>
using namespace std;

int n, a[100], final = 0;
void ktao()
{
    for (int i = 1; i <= n / 2; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n / 2;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        final = 1;
    }
    else
    {
        a[i] = 1;
    }
}
int main()
{
    cin >> n;
    ktao();
    if (n % 2 == 0)
    {
        while (final == 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << a[i];
            }
            for (int i = n / 2; i >= 1; i--)
            {
                cout << a[i];
            }
            cout << endl;
            sinh();
        }
    }
    else
    {
        while (final == 0)
        {
            for (int u = 0; u <= 1; u++)
            {
                for (int i = 1; i <= n / 2; i++)
                {
                    cout << a[i];
                }
                for (int i = n / 2; i >= 1; i--)
                {
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
    }
}