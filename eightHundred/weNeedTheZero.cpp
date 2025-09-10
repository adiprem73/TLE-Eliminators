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
PROPERTIES OF XOR
1. a xor a =0
2. a xor 0 =a
3. a xor b xor c= a xor c xor b

final : a1 xor x xor a2 xor x a3 xor x ....
        a1 xor a2 xor a3 xor a4....   xor x xor x xor x xor x xor (n times)

        if n is odd:
            a1 xpr a2 xor a3 xor ... xor x

            take x= a1 xor a2 xor a3 xor a4 .... n items

            then it will become x xor x which will ive zero
        if n is even:
            a1 xor a2 xor a3 xor a4 xor....

            THIS CASE IS SOLVABLE EASILY

        */

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vint nums(n);
        int temp=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            temp=temp^x;
            nums.push_back(x);
        }

        if(n%2!=0){
            cout<<temp<<endl;
        }
        else{
            if(temp==0){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
//by ad73prem