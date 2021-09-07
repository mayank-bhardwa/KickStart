#include <iostream>
#include <queue>
#define MIN_QUE_PAIR(_tp1, _tp2) vector<pair<_tp1, _tp2>>, greater<pair<_tp1, _tp2>>
#define MIN_QUE(_tp) vector<_tp>, greater<_tp>
using namespace std;

void solve()
{
    int n, k;
    cin >> n;
    vector<int> e;
    priority_queue<pair<int, int>, MIN_QUE_PAIR(int, int)> pq;
    while (n--)
    {
        cin >> k;
        pq.push(make_pair(k, 5));
    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
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