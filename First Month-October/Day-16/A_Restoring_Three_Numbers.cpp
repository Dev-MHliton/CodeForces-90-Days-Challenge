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

    long long x[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }

    sort(x, x + 4);

    long long S = x[3];

    cout << S - x[0] << " "
         << S - x[1] << " "
         << S - x[2] << endl;

    return 0;
}