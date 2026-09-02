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
    int a, b;
    cin >> a >> b;

    int mini = min({a, b});
    int diff = ((max({a, b})) - mini) / 2;

    cout << mini << " " << diff << "\n";

    return 0;
}