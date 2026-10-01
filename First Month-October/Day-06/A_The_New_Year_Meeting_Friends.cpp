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

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int maxi = max({x1, x2, x3});
    int mini = min({x1, x2, x3});

    cout << maxi - mini << endl;

    return 0;
}