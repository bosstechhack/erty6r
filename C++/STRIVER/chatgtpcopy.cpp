#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool isPrime(lli n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (lli i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

bool hasExactlyThreeFactors(lli n) {
    lli root = sqrt(n);
    return (root * root == n) && isPrime(root);
}

int main() {
    lli n;
    cin >> n;
    vector<lli> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if (hasExactlyThreeFactors(v[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
