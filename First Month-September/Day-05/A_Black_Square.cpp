#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[5]; // index 1 থেকে 4 ব্যবহার করবো
    for (int i = 1; i <= 4; i++)
        cin >> a[i];

    string s;
    cin >> s;

    long long total = 0;
    for (char c : s)
    {
        int strip = c - '0'; // character থেকে সংখ্যা বের করা
        total += a[strip];
    }

    cout << total << "\n";
    return 0;
}
