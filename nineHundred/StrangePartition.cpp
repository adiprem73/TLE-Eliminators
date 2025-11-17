#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define vprint(v) for (auto& elem : v) cout << elem << " "; cout << endl;
#define mprint(m) for (auto it:m) cout<<it.first<<" : "<<it.second<<endl; cout<<endl;
#define vint vector<int>
#define vstring vector<string>
#define vmat vector<vector<int>>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mii map<int,int>
#define mll map<ll,ll>

const int INF = 1e9;
const ll MOD = 1e9+7;

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> nums;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            nums.push_back(x);
        }
        ll ansMax=0;
        ll ansMin= ceil(accumulate(nums.begin(), nums.end(), 0)*1.0/x*1.0);
        for (ll i = 0; i < n; i++)
        {
            ansMax+=ceil((double)nums[i]/(double)x);
        }
        cout<<ansMin<<" "<<ansMax<<endl;
    }
    return 0;
}
//by ad73prem