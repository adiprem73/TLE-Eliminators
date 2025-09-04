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
    cin>>t;
    while(t--){
        vector<string> target(10);
        for(int i=0;i<10;i++){
            cin>>target[i];
        }
        int ans=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char ch=target[i][j];
                if(ch=='X'){
                    if(i==0 || j==0 || i==9 || j==9){
                        ans+=1;
                    }
                    else if(i==1 || j==1 || i==8 || j==8){
                        ans+=2;
                    }
                    else if(i==2 || j==2 || i==7 || j==7){
                        ans+=3;
                    }
                    else if(i==3 || j==3 || i==6 || j==6){
                        ans+=4;
                    }
                    else{
                        ans+=5;
                    }
                }
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}
//by ad73prem