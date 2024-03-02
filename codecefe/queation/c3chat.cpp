#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
    lli n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        lli i = 0;
        lli C = 0, c = 0;
        vector<pair<char, lli>> v;
        
        // Vector to store the indices of elements to be removed
        vector<int> indices_to_remove;
        
        for (char k : s) {
            if (k == 'b') {
                if (!v.empty() && c != 0) {
                    // Mark the index to be removed
                    for (lli j = 0; j < v.size(); ++j) {
                        if (v[j].second == c) {
                            indices_to_remove.push_back(j);
                        }
                    }
                    c--;
                }
            } else if (k == 'B') {
                if (!v.empty() && C != 0) {
                    // Mark the index to be removed
                    for (lli j = 0; j < v.size(); ++j) {
                        if (v[j].second == C) {
                            indices_to_remove.push_back(j);
                        }
                    }
                    C--;
                }
            } else if (k >= 'a' && k <= 'z') {
                c++;
                v.push_back({k, c});
            } else if (k >= 'A' && k <= 'Z') {
                C++;
                v.push_back({k, C});
            }
        }
        
        // Remove marked elements from the vector
        for (int idx : indices_to_remove) {
            v.erase(v.begin() + idx);
        }
        
        for (const auto& p : v) {
            cout << p.first;
        }
        cout << endl;
    }
    return 0;
}
