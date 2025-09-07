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

/*
arguement is:
if a+b+2<=n or a==b==n then yes.... else no

case 1:
how a+b+2

we wish p to be = {1, 2, 3, ... a -------------  n-b+1 ..... n-2, n-1, n}
we wish q to be = {1, 2, 3, ... a -------------  n-b+1 ..... n-2, n-1, n}

in the middle whjere we need to differentiate the two permutaitons the length must be greater thatn opr equal to 2 since we need it to have the abiulity to be differentiable. a single digits cannot differentiate the two permutations


*/

int main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if ((n == 1 && a == 1 && b == 1) || (a + b + 2 <= n))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
// by ad73prem