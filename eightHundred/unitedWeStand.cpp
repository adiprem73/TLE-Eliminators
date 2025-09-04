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
        int n;
        cin >> n;
        vint nums;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        vint b, c;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, nums[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == maxi)
            {
                c.push_back(nums[i]);
                cnt++;
            }
            else
            {
                b.push_back(nums[i]);
            }
        }
        if (cnt == nums.size())
        {
            cout << -1 << endl;
        }
        else
        {
            cout<<b.size()<<" "<<c.size()<<endl;
            vprint(b);
            vprint(c);
        }
    }

    return 0;
}
// by ad73prem