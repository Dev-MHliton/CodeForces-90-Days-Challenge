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

    long long n;
    cin >> n;

    int bills[] = {100, 20, 10, 5, 1};
    long long ans = 0;

    for (int i = 0; i < 5; i++)
    {
        ans += n / bills[i];
        n %= bills[i];
    }
    cout << ans << endl;

    return 0;
}