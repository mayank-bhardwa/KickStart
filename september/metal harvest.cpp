#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

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

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }
    return 0;
}