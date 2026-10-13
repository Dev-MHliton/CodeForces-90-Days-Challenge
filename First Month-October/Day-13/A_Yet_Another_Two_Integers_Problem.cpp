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
        long long a, b; // input
        cin >> a >> b;  // input check

        long long diff = abs(a - b); // value of absolute
        cout << (diff + 9) / 10 << '\n';
    }

    return 0;
}