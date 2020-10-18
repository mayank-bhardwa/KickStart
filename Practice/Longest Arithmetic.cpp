#include <iostream>
#include <numeric>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n], res[n];
    ll c=1,m=0;
    fo(i,n)cin>>arr[i];
    adjacent_difference(arr,arr+n,res);
    Fo(i,2,n-1)
    {
    	if(res[i]==res[i-1])
    	{
    		c++;
    	}
    	else
    	{
    		m=max(c,m);
    		c=1;
    	}
    }
    cout<<max(c,m)+1;
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