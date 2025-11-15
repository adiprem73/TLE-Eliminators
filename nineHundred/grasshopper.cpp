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
        ll x;
        cin>>x>>n;
        int times= n%4;
        n= n- (n%4) + 1;
        // cout<<"times : "<<times<<endl;
        // cout<<"n : "<<n<<endl;
        long long ans=x;
        for(int i=1;i<=times;i++){
            // cout << "ans: " << ans << endl;
            if(ans%2==1 || ans%2==-1){
                // cout<<"+"<<i<<endl;
                ans+=n;
            }
            else{
                // cout << "-" << i << endl;
                ans-=n;
            }
            
            n++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
//by ad73prem