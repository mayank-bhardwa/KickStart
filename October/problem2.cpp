#include <iostream>
#include <vector>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
using namespace std;

bool inboundry(ll n,ll i,ll j)
{
	if(i>=0 && i<n && j>=0 && j<n)return true;
	return false;
}

void solve()
{
	ll n;
	cin>>n;
	vector<vector<ll>> c(n,vector<ll>(n));
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++) cin>>c[i][j];
	}

	ll cnt=0;
	for(ll i=0;i<n;i++)
	{
		ll temp=0,j=0,k=i;
		while(inboundry(n,j,k))
		{
			temp += c[j][k];
			j++;
			k++;
		}
		cnt=max(temp,cnt);
		temp=0;
		j=0;
		k=i;
		while(inboundry(n,j,k))
		{
			temp+=c[k][j];
			j++;
			k++;
		}
		cnt=max(temp,cnt);
	}   
	cout<<cnt;
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

    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }
    return 0;
}