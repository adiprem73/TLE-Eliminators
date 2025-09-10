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

// in the array there should be atleast two distinct numbers if there are, then its always possible to make it beautifyl by taking the largest number take the fist index
// sort the array and the first and the alst elements must be differenct


int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vint nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());
        if(nums[0]==nums[nums.size()-1]){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
            // the array would be {max, min, ,,,.,the rest of the array}
            reverse(nums.begin(), nums.end());
            swap(nums[1], nums[nums.size()-1]);
            vprint(nums);
        }
    }
    return 0;
}
//by ad73prem