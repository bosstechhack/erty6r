#include<bits/stdc++.h>
using namespace std;

int checkpreceding(char m, char n, vector<char>& v) {
    int c, d;
    for (int i = 0; i < 4; i++) {
        if (m == v[i]) {
            c = i;
        }
        if (n == v[i]) {
            d = i;
        }
    }
    return c >= d; }

int main() {
    string s;
    vector<char> v = {'-', '+', '*', '/'};
    string snew;
    cin >> s;
    stack<char> st;
    int i = s.size();

    while (i--) {
        if (s[i] == '/' || s[i] == '*' || s[i] == '+' || s[i] == '-') {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                while (!st.empty() && checkpreceding(st.top(), s[i], v)) {
                    snew.push_back(st.top());
                    st.pop();
                }
                st.push(s[i]);
            }
        } else {
            snew.push_back(s[i]); // Operand
        }
        
    }

    while (!st.empty()) {
        snew.push_back(st.top());
        st.pop();
    }
    reverse(snew.begin(),snew.end());
    cout << snew << endl;
    return 0;
}
