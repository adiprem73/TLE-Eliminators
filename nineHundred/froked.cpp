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
        int a,b,xk,yk, xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        vector<pair<int,int>> king;
        vector<pair<int,int>> queen;
        if(a==b){
            king = {
                {xk + a, yk + a},
                {xk - a, yk + a},
                {xk + a, yk - a},
                {xk - a, yk - a},
            };
            queen = {
                {xq + a, yq + a},
                {xq - a, yq + a},
                {xq + a, yq - a},
                {xq - a, yq - a},
            };
            int cnt = 0;
            for (auto itk : king)
            {
                for (auto itq : queen)
                {
                    if (itk == itq)
                    {
                        cnt++;
                    }
                }
            }
            cout << cnt << endl;
            continue;
        }
        king = { {xk + a, yk + b},
                 {xk - a, yk + b},
                 {xk + a, yk - b},
                 {xk - a, yk - b},
                 {xk + b, yk + a},
                 {xk - b, yk + a},
                 {xk + b, yk - a},
                 {xk - b, yk - a},
        };
        queen = { {xq + a, yq + b},
                 {xq - a, yq + b},
                 {xq + a, yq - b},
                 {xq - a, yq - b},
                 {xq + b, yq + a},
                 {xq - b, yq + a},
                 {xq + b, yq - a},
                 {xq - b, yq - a},
        };
        // cout<<"king moves : "<<endl;
        // for (auto& elem : king) cout << "(" << elem.first << ", " << elem.second << ") "; cout << endl;
        // cout << "queen moves : " << endl;
        // for (auto& elem : queen) cout << "(" << elem.first << ", " << elem.second << ") "; cout << endl;
        int cnt=0;
        for(auto itk: king){
            for(auto itq: queen){
                if(itk==itq){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
//by ad73prem