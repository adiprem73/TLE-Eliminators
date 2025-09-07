#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define vprint(v)            \
    for (auto &elem : v)     \
        cout << elem << " "; \
    cout << endl;
#define mprint(m)                                       \
    for (auto it : m)                                   \
        cout << it.first << " : " << it.second << endl; \
    cout << endl;
#define vint vector<int>
#define vstring vector<string>
#define vmat vector<vector<int>>
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>

const int INF = 1e9;
const ll MOD = 1e9 + 7;

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << '\n'
                 << n << '\n';
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k == 1)
            {
                cout << "NO" << endl;
            }
            else if (k == 2)
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << '\n'
                         << n/2 << '\n';
                    for (int i = 0; i < n/2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if (n % 2 == 0)
                {
                    cout << "YES" << '\n'
                         << n/2 << '\n';
                    for (int i = 0; i < n/2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }else{
                    cout<<"YES"<<endl;
                    cout<<(n-3)/2 + 1<<endl;
                    cout<<3<<" ";
                    for(int i=0;i<(n-3)/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}
// by ad73prem