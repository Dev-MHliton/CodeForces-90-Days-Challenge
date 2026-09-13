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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long max_sum = 0;
        int operations = 0;
        bool in_negative_block = false;

        for (int i = 0; i < n; i++)
        {
            max_sum += abs(a[i]);
            if (a[i] < 0)
            {
                if (!in_negative_block)
                {
                    operations++;
                    in_negative_block = true;
                }
            }
            else if (a[i] != 0)
            {
                in_negative_block = false;
            }
        }

        cout << max_sum << " " << operations << "\n";
    }
    return 0;
}
