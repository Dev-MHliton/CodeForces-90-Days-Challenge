#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

int main()
{
    fastio();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << i << (i == n ? '\n' : ' ');
        }
    }

    return 0;
}