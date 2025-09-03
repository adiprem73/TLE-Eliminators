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
    cin>>t;
    while(t--){
        int n,x;
        vint nums;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            int xx;
            cin>>xx;
            nums.push_back(xx);
        }
        int vol=INT_MIN;
        if(n==1){
            vol=max(vol, nums[0]);
            vol=max(vol, 2*(x-nums[0]));
            cout<<vol<<endl;
            continue;
        }
        vol=max(vol, nums[0]); //first trip
        vol=max(vol, 2*(x-nums[n-1])); //last trip travelled tow times consecutively
        for(int i=0;i<n-1;i++){
            vol=max(vol, nums[i+1]-nums[i]);
        }
        cout<<vol<<endl;
    }
    return 0;
}
//by ad73prem