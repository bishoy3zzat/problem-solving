#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define nl "\n"
#define int long long
#define inn(vectorName , n) for(int i = 0; i < n ; i++) cin >> vectorName[i];
#define in(object) cin >> object
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define all(v) v.begin() , v.end()

void fileIO() {
#ifndef ONLINE_JUDGE
    freopen(R"(C:\Users\bisho\CLionProjects\untitled1\input.txt)", "r", stdin);
    freopen(R"(C:\Users\bisho\CLionProjects\untitled1\output.txt)", "w", stdout);
#endif
}

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int MOD = 1e9 + 7;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return num >= 2;
}

int power(int x, int y) {
    if (y == 0) return 1;
    if (y % 2 == 1) return x * power(x, y - 1) % MOD;
    int half = power(x, y / 2);
    return (half * half) % MOD;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    inn(v,n);
    for (int i = 1; i < n/2; ++i) {
        if(v[i] == v[i-1] || v[n-i-1] == v[n-i]) {
            swap(v[i] , v[n-i-1]);
        }
    }
    int res = 0;
    for (int i = 0; i < n-1; ++i) {
        if (v[i] == v[i+1]) {
            res++;
        }
    }
    cout << res;
}

signed main() {
    fastIO(), fileIO();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
#ifndef ONLINE_JUDGE
        cout << "Case #" << i << ":\n";
#endif
        solve();
        cout << nl;
    }
    return 0;
}
