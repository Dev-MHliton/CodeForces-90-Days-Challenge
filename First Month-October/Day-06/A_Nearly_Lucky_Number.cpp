#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

bool isLucky(int x)
{
    if (x == 0)
        return false;

    while (x > 0)
    {
        int digit = x % 10;

        if (digit != 4 && digit != 7)
            return false;

        x /= 10;
    }

    return true;
}

int main()
{
    fastio();

    long long n;
    cin >> n;

    int luckyCount = 0;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit == 4 || digit == 7)
            luckyCount++;

        n /= 10;
    }

    if (isLucky(luckyCount))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}