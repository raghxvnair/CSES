#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define gc getchar_unlocked
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define rep(i, k, n) for (ll i = k; k < n ? i < n : i >= n; k < n ? i += 1 : i -= 1)
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define nl "\n"
#define sz(x) ((ll)(x).size())
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define foto(i,x) for(auto& i:x)
#define PI 3.1415926535897932384626
#define MOD 1000000007
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

void print(ll n, vl& v){
    fo(i,n) cout<<v[i]<<" ";
    cout<<"\n";
}

void read(ll n, vl& v){
    fo(i,n) cin>>v[i];
}
ll powi(ll base, ll exp, ll mod) {
  base %= mod;
  ll result = 1;
  while (exp > 0) {
  if (exp & 1) result = (result * base) % mod;
  base = (base * base) % mod;
  exp >>= 1;
}
return result;
}

void solve()
{
    ll n,x;
    cin>>n>>x;
    vl v(n);
    read(n,v);
    vl dp(x+1);
    dp[0]=1;
    fo(i,n){
        if(v[i]<=x){
            rep(j,v[i],x+1) {
                dp[j]+=(dp[j-v[i]])%=MOD;
            }
        }
    }
    cout<<dp[x]%MOD;
}

int main()
{
    fastio();

    ll t=1;
    // cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}