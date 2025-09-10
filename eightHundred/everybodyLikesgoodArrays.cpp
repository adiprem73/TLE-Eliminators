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
/* 
int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vint nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int p=0;
        int cnt=0;
        while(p<nums.size()-1){
            if((nums[p]&1) == (nums[p+1]&1)){
                nums[p+1]=nums[p]*nums[p+1];
                nums.erase(nums.begin()+p);
                cnt++;
            }
            else{
                p++;
            }
            // vprint(nums);
        }
        cout<<cnt<<endl;
    }
    return 0;
}



the above is the brute force approach. the key idea behin the problem is that:
-> if i have a segment of elemetns of same parity then i want to reduve them to a single number with s-1 operations.

a;ternaitvely if two adjacent elements have the smae parity we perform an operation on them
*/

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vint nums;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        int cnt=0;
        int curr=0;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]&1) ==( nums[i+1]&1)){
                curr++;
            }
            
        }
        cout<<curr<<endl;
    }
    return 0;
}

//by ad73prem