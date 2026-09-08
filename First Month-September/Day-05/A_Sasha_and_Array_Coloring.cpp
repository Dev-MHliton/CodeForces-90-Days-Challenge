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
        int n, ans = 0;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n / 2; i++) // Here n/2 = pair divided suppose 5/2 = 2 pair.
        {
            ans += a[n - 1 - i] - a[i]; // n-1 means index 0 to start ok
        }
        cout << ans << endl;
    }

    return 0;
}