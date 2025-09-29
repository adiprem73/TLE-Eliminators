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
now, the thing is that we cannot find the actual interval inside the 1 to n. but if we start from 1 and take increasing by 1 and checking we will get an interval lets say 1 to s. now if all of the 1 to s elements divide n and since thwy are the smallest they will also be dividing the elelements of the actual longest sequence.

*/

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll i=1;
        while(n%i==0){
            i++;
        }
        cout<< i-1<<endl;
    }
    return 0;
}
//by ad73prem