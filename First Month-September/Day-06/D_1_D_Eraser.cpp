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

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                ans++;

                // পরের k টি ঘর white করে দিলাম
                for (int j = i; j < min(i + k, n); j++)
                {
                    s[j] = 'W';
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}