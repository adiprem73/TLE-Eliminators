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

//the basic idea is the the smallest possible sum of k integers is {1,2,3,...k} and the largest possible is {n-k,    n-k+1, ....... n}. so if x lies in between in this range then we can always adjust one or two or whatver numbers we want 

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll sumOfX= k*(k+1)/2;
        ll sumOfN= n*(n+1)/2;
        ll high= sumOfN- ((n-k)*(n-k+1)/2);
        // cout<<"high : "<<high<<" low : "<<sumOfX<<endl;
        if(x>=sumOfX && x<=high){
            cout<<"yes"<<endl;
        } 
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
//by ad73prem