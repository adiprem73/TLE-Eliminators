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
        ll n;
        cin>>n;
        vector<ll> nums;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            nums.push_back(x);
        }
        ll op=0;
        ll currfreq=0;
        map<ll,ll> mp;
        for(auto it: nums){
            mp[it]++;
        }

        for(auto it: mp){
            currfreq=max(currfreq, it.second);
        }

        while(currfreq<n){
            op++;

            if(currfreq*2<=n){
                op += currfreq;
                currfreq*=2;
                
            }else{
                op+= (n-currfreq);
                currfreq=n;
            }
        }
        cout<< op<<"\n";
    }
    return 0;
}
//by ad73prem