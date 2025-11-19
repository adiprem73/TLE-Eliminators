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
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        vector<ll> nums(n*k);
        for(int i=0;i<n*k;i++){
            cin>>nums[i];
        }

        sort(nums.begin(), nums.end());
        // vprint(nums);

        ll pointer= n*k;
        ll sum=0;
        while(k--){
            pointer-= (n/2+1);
            sum+=nums[pointer];
        }
        cout<<sum<<endl;
    }
    return 0;
}
//by ad73prem