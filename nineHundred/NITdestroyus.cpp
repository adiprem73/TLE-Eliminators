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
        vector<ll> a;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        // vprint(a);
        
        // count number oif zeroes
        int num0=0;
        for(auto it: a){
            if(it==0){
                num0++;
            }
        } 
        int left=0;
        int right=n-1;
        while(left<n &&  a[left]==0 ){
            left++;
        } 
        while(right>=0 && a[right]==0){
            right--;
        } 
        // counte number of zeros betwwen non zeroes elements
        // cout<<left<<" "<<right<<endl;
        bool flag= false;
        for(int i=left;i<=right;i++){
            if(a[i]==0){
                flag=true;
            }
        }

        if(num0==n){
            cout<<0<<endl;
        }
        else if(flag==true){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}
//by ad73prem