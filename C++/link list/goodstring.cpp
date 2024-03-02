#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n--){
        lli n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<char>arr;
        for(lli i=0;i<q;i++){
             char c;
             cin>>c;
            arr.push_back(c);
        }
        map<char, int> charFrequencyMap;

    char currentChar = '\0';
    int currentCount = 0;

    for (char p : s) {
        if (p == currentChar) {
            // Increment the count if the current character is the same as the previous one
            currentCount++;
        } else {
            // Update the map with the count for the previous character
            if (currentCount > 0) {
                charFrequencyMap[currentChar] = currentCount;
            }

            // Reset the current count for the new character
            currentCount = 1;
            currentChar = p;
        }
    }

    // Update the map for the last character
    if (currentCount > 0) {
        charFrequencyMap[currentChar] = currentCount;
    }
    vector<pair<char, int>> charFrequencyVector(charFrequencyMap.begin(), charFrequencyMap.end());
    cout<<charFrequencyVector[0].second<<" ";
    int t=0;
    while(t==q){
        for(int i=0;i<charFrequencyVector.size();i++){
            if(arr[t]==charFrequencyVector[i].first){
                charFrequencyVector[i].second=charFrequencyVector[i].second+1;
                cout<<charFrequencyVector[i].second;
                t++;
            }
            else{
                charFrequencyVector.push(arr[t])

            }
        }
        
    }


        

        
    }

}