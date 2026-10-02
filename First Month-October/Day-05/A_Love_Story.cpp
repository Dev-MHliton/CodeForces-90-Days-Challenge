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

    string target = "codeforces";

    while (t--)
    {
        string s;
        cin >> s;
        int diff = 0;

        for (int i = 0; i < 10; i++)
        {
            if (s[i] != target[i])
                diff++;
        }
        cout << diff << endl;
    }

    return 0;
}