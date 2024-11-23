// Thuat toan sinh
// chia tao
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, x[100], k = 1, ok;
void sinh()
{
    int i = k;
    while (i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 1;
    }
    else
    {
        x[i] = 1;
    }
}

int main()
{
    int cnt = 0;
    int n;
    cin >> n;
    while (1)
    {
        ok = 0;
        while (ok == 0)
        {
            for (int i = 1; i <= k; i++)
            {
                if (x[i] == 0)
                {
                    cout << 6;
                }
                else
                {
                    cout << 8;
                }
            }

            for (int i = k; i >= 1; i--)
            {
                if (x[i] == 0)
                {
                    cout << 6;
                }
                else
                {
                    cout << 8;
                }
            }
            cout << endl;
            cnt++;
            if (cnt == n)
            {
                break;
            }
            sinh();
        }
        if (cnt == n)
        {
            break;
        }
        k++;
    }
}