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
        int n;
        cin>>n;
        vector<ll> a;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }

        ll cnt=0;
        bool flag= true;
        for(int i=n-2;i>=0;i--){
            // cout<<"for : "<<a[i]<<endl;
            while(a[i]>=a[i+1]){
                if(a[i]==0 ){
                    break;
                }
                // cout<<a[i]<<endl;
                a[i]/=2;
                cnt++;
            }
            if(a[i]==0 && a[i+1]==0){
                cnt=-1;
                break;
            }
            // cout<<"final : "<<a[i]<<endl;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
//by ad73prem