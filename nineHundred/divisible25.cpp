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

int min_operations(string n, string possible_value){
    int operations=0;
    int checker_index = possible_value.size()-1;
    for(int i= n.size()-1;i>=0;i--){
        if(n[i]== possible_value[checker_index]){
            checker_index--;

            if(checker_index<0){
                break;
            }
        }
        else{
            operations++;
        }
    }
    if(checker_index>=0){
        operations= INT_MAX;
    }
    return operations;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        vector<string> possible_values={"00", "25", "50", "75"};
        int ans=INT_MAX;
        for(auto possible_value : possible_values){
            ans=min(ans, min_operations(s, possible_value));
        }
        cout<<ans<<endl;
    }
    return 0;
}
    

//by ad73prem