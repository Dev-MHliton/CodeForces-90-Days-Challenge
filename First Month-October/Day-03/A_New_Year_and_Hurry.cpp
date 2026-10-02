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

    int n, k;
    cin >> n >> k;

    int available = 240 - k;
    int time = 0, solved = 0;

    for (int i = 1; i <= n; i++)
    {
        time += 5 * i;
        if (time > available)
            break;
        solved++;
    }

    cout << solved << endl;
    return 0;
}
