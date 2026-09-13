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

    int a[5];
    for (int i = 1; i <= 4; i++)
        cin >> a[i];

    string s;
    cin >> s;

    long long total = 0;
    for (char c : s)
    {
        int strip = c - '0';
        total += a[strip];
    }

    cout << total << "\n";
    return 0;
}
