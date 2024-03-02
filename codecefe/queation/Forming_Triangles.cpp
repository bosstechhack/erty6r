#include<bits/stdc++.h>
using namespace std;

void generateCombinations(const vector<int>& arr, int start, int count, vector<int>& currentSet) {
    if (count == 0) {
        for (int element : currentSet) {
            cout << element << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i < arr.size(); ++i) {
        // Skip consecutive identical elements
        if (i > start && arr[i] == arr[i - 1]) {
            continue;
        }

        currentSet.push_back(arr[i]);
        generateCombinations(arr, i + 1, count - 1, currentSet);
        currentSet.pop_back();
    }
}

int main() {
    vector<int> arr = {3, 2, 1, 3};
    pair<int,<pair<int,int>>pp;
    if (arr.size() < 3) {
        cerr << "Array size is less than 3, cannot form sets." << endl;
        return 1;
    }

    // Sort the array to handle duplicates
    sort(arr.begin(), arr.end());

    vector<int> currentSet;
    generateCombinations(arr, 0, 3, currentSet);

    return 0;
}
