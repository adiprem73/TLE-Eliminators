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
        string s;
        cin>>s;
        int cnt1=0;
        int cnt0=0;
        for(char ch: s){
            if(ch=='1')cnt1++;
            else cnt0++;
        }

        if(cnt1+cnt0==1){
            cout<<1<<endl;
            continue;
        }
        if(cnt1==cnt0){
            cout<<0<<endl;
            continue;
        }
        int var=0;
        for(int i=0;i<s.length();i++){
            char ch= s[i];
            if(ch=='0' && cnt1>0){
                cnt1--;
                var++;
            }
            else if(ch=='1' && cnt0>0){
                cnt0--;
                var++;
            }

            else {
                break;
            }
        }
        cout<<s.length()-var<<endl;
    }
    return 0;
}
//by ad73prem