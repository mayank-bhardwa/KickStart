#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;
    vector<pair<int,int>> a(n);
    vector<int> outtime(n);
    fo(i,n)
    {
    	cin >> a[i].first ;    	
    	a[i].first = ceil((double)a[i].first/x);
    	a[i].second = i+1;
    }

    sort(a.begin(), a.end());
    for(auto i : a)
    {
    	cout<<i.second<<" ";
    }
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