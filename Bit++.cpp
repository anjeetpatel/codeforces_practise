#include <bits/stdc++.h>
using namespace std;

int a = 0;

void solve(string &s1)
{
    if (s1 == "X++" || s1 == "++X")
        a++;
    else if (s1 == "X--" || s1 == "--X")
        a--;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string s1;
        cin >> s1;
        solve(s1);
    }
    cout << a;
    return 0;
}
