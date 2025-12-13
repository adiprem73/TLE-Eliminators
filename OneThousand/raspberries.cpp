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
        int n,k;
        cin>>n>>k;
        vint nums(n);
        int ans=-1;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]%k==0){
                ans=0;
            }
        }
        // cout<<ans<<endl;
        if(k!=4 && ans==-1){
            // cout<<"hello"<<endl;
            ans=INT_MAX;
            for(int i=0;i<n;i++){
                ans= min(ans, (k-nums[i]%k));
            }
        }else if(ans==-1 && k==4){
            int countEven=0;
            for(auto it: nums){
                if(it%2==0){
                    countEven++;
                }
            }
            if(countEven>=2){
                ans=0;
            }else if(countEven==1){
                ans=1;
            }else if (countEven==0){
                bool flag=true;
                for (auto it : nums)
                {
                    if (it % k == 3)
                    {
                        ans=1;
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    ans=2;
                }
            }

        }
        
        cout<<ans<<endl;
    }
    return 0;
}
//by ad73prem