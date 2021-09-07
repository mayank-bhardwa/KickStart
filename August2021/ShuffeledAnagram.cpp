#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string copy = s;
    int n = s.size();

    vector<bool> processed(n, false);
    for (int i = 0; i < n; i++)
    {
        if (processed[i])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (s[i] != s[j] && s[i] != copy[j] && s[j] != copy[i])
            {
                swap(s[i], s[j]);
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == copy[i])
        {
            cout << "IMPOSSIBLE";
            return;
        }
    }

    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
    return 0;
}