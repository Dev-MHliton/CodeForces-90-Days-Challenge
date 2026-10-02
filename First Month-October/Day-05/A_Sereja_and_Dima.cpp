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
    cin >> n;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    int l = 0;
    int r = n - 1;

    int sereja = 0;
    int dima = 0;

    for (int turn = 0; l <= r; turn++)
    {
        int x;

        // Choose the larger card from left or right
        if (a[l] > a[r])
        {
            x = a[l];
            l++;
        }
        else
        {
            x = a[r];
            r--;
        }

        // Sereja plays on even turns, Dima on odd turns
        if (turn % 2 == 0)
            sereja += x;
        else
            dima += x;
    }

    cout << sereja << " " << dima << '\n';

    return 0;
}