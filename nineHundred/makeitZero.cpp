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
BITWISE XOR:
a^a= 0
a^0=a


if n is even the answer is 2
1   n
1   n

firt time the entire array become the same,
and the second time x^x^x^x^.... taking xor of this makes the entire array zero since x^x=0


if n is odd the anser is 4
1   n-1
1   n-1
0 0 0 0 0 0 0 an

n-1   n
0 0 0 0 0 0 an an

n-1   n
0 0 0 0 0 0 0 0



*/


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
        int size= nums.size();
        if(size%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<size<<endl;
            cout << 1 << " " << size << endl;
        }else{
            cout << 4 << endl;
            cout << 1 << " " << size-1 << endl;
            cout << 1 << " " << size-1 << endl;
            cout << size-1 << " " << size << endl;
            cout << size-1 << " " << size << endl;
        }
    }
    return 0;
}
//by ad73prem