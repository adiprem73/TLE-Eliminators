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
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        // vprint(nums);
        int ind;
        bool flag=false;
        int x,y;
        for(int i=0;i<n-1;i++){
            bool flag1=false;
            bool flag2= false;
            // cout<<"nums[i]: "<<nums[i]<<endl;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    flag1= true;
                    ind=i;
                    x=j;
                    break;
                }
            }

            for(int k=i+1;k<n;k++){
                if(nums[k]<nums[i]){
                    flag2 = true;
                    y=k;
                    break;
                }
            }

            if(flag1&& flag2){
                flag= true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << x+1 << " " <<ind+1<<" "<< y+1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
//by ad73prem