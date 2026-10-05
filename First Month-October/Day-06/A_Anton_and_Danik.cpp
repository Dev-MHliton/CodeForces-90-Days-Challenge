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

    int n;
    string s;
    cin >> n >> s;

    int anton = 0, danik = 0;
    for (char c : s)
    {
        if (c == 'A')
            anton++;
        else
            danik++;
    }

    // IF-else condition
    if (anton > danik)
        cout << "Anton\n";
    else if (danik > anton)
        cout << "Danik\n";
    else
        cout << "Friendship\n";

    return 0;
}