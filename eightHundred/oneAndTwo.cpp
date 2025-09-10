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
        vint nums;
        cin>>n;
        int n2=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==2){
                n2++;
            }
            nums.push_back(x);
        }    
        // cout<<n2<<endl; 
        if(n2%2==1){
            cout<<-1<<endl;
        }else{
            int target=n2/2;
            for(int i=0;i<n;i++){
                if(nums[i]==2){
                    target--;
                }
                if(target==0){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}
//by ad73prem