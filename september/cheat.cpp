#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

typedef long long ll;
void solve()
{
  int n, k;
  cin >> n >> k;
  vector <pair <int, int> > e;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    e.push_back({l, r});
  }
  sort(e.begin(), e.end());
  int last = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    e[i].first = max(e[i].first, last);
    if (e[i].first < e[i].second) {
      int ret = (e[i].second - e[i].first + k - 1) / k;
      ans += ret;
      last = e[i].first + ret * k;
    }
  }
  cout << ans;
}
int main() {
#ifdef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt","w",stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  for (int tc = 1; tc <= t; tc++) {
    cout << "Case #" << tc << ": ";
    solve();
    cout << '\n';
  }
}
