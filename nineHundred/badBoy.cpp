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

ll dist(pair<ll,ll> A, pair<ll,ll> B){
    ll a= A.first;
    ll b= A.second;
    ll c= B.first;
    ll d= B.second;
    return abs(a-c)+abs(b-d);
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        ll n,m,i,j;
        cin>>n>>m>>i>>j;
        pair<ll,ll> S={i,j};
        vector<pair<ll,ll>> corners=   {{1,1}, {1,m},{n,1}, {n,m}};

        ll best_distance= -1;
        pair<ll,ll> A_best, B_best;

        // to try all possible combinations

        for(auto &A: corners){
            for(auto &B: corners){
                ll total= dist(S,A) +dist(A,B) + dist(B,S);
                if(total>best_distance){
                    best_distance=total;
                    A_best= A;
                    B_best= B;
                }
            }
        }

        cout<<A_best.first<<" "<<A_best.second<<" "<<B_best.first<<" "<<B_best.second<<endl;
    }
    return 0;
}
//by ad73prem