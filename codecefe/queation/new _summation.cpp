#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int lli;

int main() {
    lli n;
    std::cin >> n;
    
    while (n--) {
        int s, k, x;
        std::cin >> s >> k >> x;
        
        std::vector<int> v(s);
        for (int i = 0; i < s; i++) {
            std::cin >> v[i];  
        }
        std::sort(v.begin(), v.end());
        
        int a = 0;
        std::vector<int> v1(s);
        for (int i = 0; i < s; i++) {
            a = a + v[i];
            v1[i] = a;   
        }
        
        std::vector<int> v3;
        
        for (int i = 0; i <= k; i++) {
            if ((s - 1 - x - i) >= 0) {
                int l = v1[s - 1 - i] - v1[s - 1 - x - i];
                int c = v1[s - 1 - x - i] - l;
                v3.push_back(c);
            } else {
                v3.push_back(-1 * v1[s - 1 - i]);
            }
        }
        
        if (s == k) {
            v3.push_back(0);
        }
        
        std::sort(v3.begin(), v3.end());
        
        std::cout << v3[v3.size() - 1] << std::endl;
    }
    
    return 0;
}
