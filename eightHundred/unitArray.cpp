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


// the number of 1s should be more than -1s
// even number of -1s


int main() {
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vint nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        int x=mp[-1]; //number of -1
        int y=mp[1]; // number of 1
        if(x==nums.size()){
            cout<<x<<endl;
            continue;
        }
        if(x%2!=0 && (x-y)>0){
            cout<<1<<endl;
            continue;
        }
        if(x%2!=0){
            cout<<1<<endl;
            continue;
        }
        if((x-y)>0){
            cout<<((x-y+1)/2)<<endl;
            continue;
        }
        cout<<0<<endl;
    }
    return 0;
}
//by ad73prem