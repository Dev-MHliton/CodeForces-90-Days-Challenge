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
        int a, b, c;
        cin >> a >> b >> c;

        // if-else condition
        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}