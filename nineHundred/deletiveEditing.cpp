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
    int tt;
    cin >> tt;
    while(tt--){
        string s, t;
        cin>>s>>t;
        unordered_map<char,int> ft;
        for(char ch: t){
            ft[ch]++;
        }

        for (int i=s.length()-1;i>=0;i--){
            if(ft[s[i]]!=0){
                ft[s[i]]--;
            }
            else{
                s[i]='.';
            }
        }
        string ans="";
        for(char ch: s){
            if(ch!='.'){
                ans+=ch;
            }
        }
        if(ans==t){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
//by ad73prem